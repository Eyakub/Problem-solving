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
	reader := bufio.NewReaderSize(os.Stdin, 16*1024*1024)
	nTemp, err := strconv.ParseInt(strings.TrimSpace(readLine(reader)), 10, 64)
	checkError(err)
	n := int32(nTemp)

	arrTemp := strings.Split(strings.TrimSpace(readLine(reader)), " ")

	var arr []int32

	for i := 0; i < int(n); i++ {
		arrItemTemp, err := strconv.ParseInt(arrTemp[i], 10, 64)
		checkError(err)
		arrItem := int32(arrItemTemp)
		arr = append(arr, arrItem)
	}
	res := reverse(arr)
	// fmt.Println(res)
	fmt.Println(strings.Trim(strings.Join(strings.Split(fmt.Sprint(res), " "), " "), "[]"))
	// s, _ := json.Marshal(res)
	// fmt.Println(strings.Trim(string(s), "[]"))
	// how to solve this? let's figure it out ltr
	// fmt.Println(strings.Join(res, " "))

}

func reverse(arr []int32) []int32 {
	newNumbers := make([]int32, 0, len(arr))
	for i := len(arr) - 1; i >= 0; i-- {
		newNumbers = append(newNumbers, arr[i])
	}
	return newNumbers
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
