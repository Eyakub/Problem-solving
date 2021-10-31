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
	reader := bufio.NewReaderSize(os.Stdin, 10*1024*1024)

	nTemp, err := strconv.ParseInt(strings.TrimSpace(readLine(reader)), 10, 64)
	checkError(err)
	n := int(nTemp)
	solve(n)

}

func solve(n int) {
	var inp string
	for i := 0; i < n; i++ {
		fmt.Scan(&inp)
		var even_string string
		var odd_String string
		for j := 0; j < len(inp); j++ {
			if j%2 == 0 {
				even_string += string(inp[j])
			} else {
				odd_String += string(inp[j])
			}
		}
		fmt.Println(even_string, " ", odd_String)
		even_string, odd_String = "", ""
	}
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
