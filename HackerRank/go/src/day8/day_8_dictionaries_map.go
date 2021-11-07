package main

import (
	"bufio"
	"fmt"
	"io"
	"os"
	"strconv"
	"strings"
)

func main() {
	reader := bufio.NewReaderSize(os.Stdin, 1024*1024)

	nTemp, err := strconv.ParseInt(readLine(reader), 10, 64)
	checkError(err)
	n := int32(nTemp)

	phoneBook := make(map[string]int64)

	for i := 0; i < int(n); i++ {
		line := strings.Split(readLine(reader), " ")
		val, err := strconv.ParseInt(line[1], 10, 64)
		checkError(err)

		phoneBook[line[0]] = val
	}

	for query := readLine(reader); query != ""; query = readLine(reader) {
		if val, ok := phoneBook[query]; ok {
			fmt.Printf("%s=%d\n", query, val)
		} else {
			fmt.Println("Not found")
		}
	}

	// for i := 0; i < int(n); i++ {
	// 	name := readLine(reader)
	// 	if phone, ok := phoneBook[name]; ok {
	// 		fmt.Println(name + "=" + phone)
	// 	} else {
	// 		fmt.Println("Not found")
	// 	}
	// }

}

func readLine(reader *bufio.Reader) string {
	str, _, err := reader.ReadLine()
	if err == io.EOF {
		return ""
	}
	return strings.TrimRight(string(str), "\r\n")
}

func checkError(err error) {
	if err != nil {
		panic(err)
	}
}
