package main

import (
	"bufio"
	"errors"
	"fmt"
	"io"
	"math"
	"os"
	"strconv"
	"strings"
)

type Calculator struct {
	n int64
	p int64
}

func (c Calculator) power() (int64, error) {
	if c.n < 0 || c.p < 0 {
		return 0, errors.New("n and p should be non-negative")
	} else {
		return int64(math.Pow(float64(c.n), float64(c.p))), nil
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

func main() {
	reader := bufio.NewReaderSize(os.Stdin, 1024*1024)
	nTest, err := strconv.ParseInt(readLine(reader), 10, 64)
	var i int64
	checkError(err)

	for i = 0; i < nTest; i++ {
		var n int64
		var p int64
		fmt.Scanf("%d %d", &n, &p)
		calculate := Calculator{n, p}
		result, err := calculate.power()
		checkError(err)
		fmt.Println(result)
	}
}
