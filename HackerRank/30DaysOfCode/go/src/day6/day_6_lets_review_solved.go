package main

import (
	"bufio"
	"fmt"
	"io"
	"os"
	"strconv"
)

func run(stdin io.Reader, stdout io.Writer) {
	reader := bufio.NewReaderSize(stdin, 90000)

	testCaseCount, _ := strconv.ParseInt(readLine(reader), 10, 64)

	for i := int64(0); i < testCaseCount; i++ {
		text := readLine(reader)

		runes := []rune(text)
		runeCount := len(runes)

		for e := 0; e < runeCount; e += 2 {
			fmt.Fprint(stdout, string(runes[e]))
		}

		fmt.Fprint(stdout, " ")

		for o := 1; o < runeCount; o += 2 {
			fmt.Fprint(stdout, string(runes[o]))
		}

		if i < testCaseCount-1 {
			fmt.Fprintln(stdout)
		}
	}
}

func readLine(reader *bufio.Reader) string {
	str, isPrefix, err := reader.ReadLine()
	if err == io.EOF {
		return ""
	}

	if isPrefix {
		panic("Buffer to small")
	}

	return string(str)
}

func main() {
	run(os.Stdin, os.Stdout)
}
