package main

import (
	"bufio"
	"fmt"
	"io"
	"math"
	"os"
	"strconv"
	"strings"
)

func main() {
	reader := bufio.NewReaderSize(os.Stdin, 1024*1024)

	nTemp, err := strconv.ParseInt(readLine(reader), 10, 64)
	checkError(err)

	n := int64(nTemp)
	binary_lst := binary_numbers(n)
	consecutive_max(binary_lst)
}

func binary_numbers(n int64) string {
	return strconv.FormatInt(n, 2)
}

func consecutive_max(binary_lst string) {
	var count, result int64
	for i := 0; i < len(binary_lst); i++ {
		if binary_lst[i] == '0' {
			count = 0
		} else {
			count++
			result = int64(math.Max(float64(result), float64(count)))
		}
	}
	fmt.Println(result)
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
