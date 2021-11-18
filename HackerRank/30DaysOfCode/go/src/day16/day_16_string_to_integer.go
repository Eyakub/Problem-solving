package main

import (
	"bufio"
	"fmt"
	"io"
	"os"
	"strconv"
	"strings"
)

func readLine(reader *bufio.Reader) string {
	str, _, err := reader.ReadLine()
	if err == io.EOF {
		return ""
	}

	return strings.TrimRight(string(str), "\r\n")
}

func checkError(err error) {
	if err != nil {
		fmt.Println("Bad String")
	}
}

func main() {
	reader := bufio.NewReaderSize(os.Stdin, 1024*1024)
	n, err := strconv.ParseInt(readLine(reader), 10, 64)
	checkError(err)
	fmt.Println(n)

}
