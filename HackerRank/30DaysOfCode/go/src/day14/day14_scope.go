package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
)

type Difference struct {
	max_difference int
	elements       []int
}

func (difference *Difference) Init(arr []int) {
	difference.elements = arr
}

func (difference *Difference) computeDifference() {
	max := difference.elements[0]
	min := difference.elements[0]
	for _, element := range difference.elements {
		if element > max {
			max = element
		}
		if element < min {
			min = element
		}
	}
	difference.max_difference = max - min
}

func readLine(reader *bufio.Reader) string {
	str, _, err := reader.ReadLine()
	if err == nil {
		return string(str)
	}
	return ""
}

func checkError(err error) {
	if err != nil {
		panic(err)
	}
}

func main() {
	reader := bufio.NewReaderSize(os.Stdin, 1024*1024)
	nTemp, err := strconv.ParseInt(readLine(reader), 10, 64)

	var arr []int

	checkError(err)
	n := int(nTemp)

	for i := 0; i < n; i++ {
		arrItemTemp, err := strconv.ParseInt(readLine(reader), 10, 64)
		checkError(err)
		arrItem := int(arrItemTemp)
		arr = append(arr, arrItem)
	}

	difference := Difference{}
	difference.Init(arr)
	difference.computeDifference()
	fmt.Println(difference.max_difference)
}
