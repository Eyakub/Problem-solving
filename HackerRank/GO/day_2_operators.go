// https://www.hackerrank.com/challenges/30-operators/problem

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


func solve(meal_cost float64, tip_percent float64, tax_percent float64){
	res := meal_cost + meal_cost * float64(tip_percent)/100.0 + meal_cost * float64(tax_percent)/100.0
	fmt.Println(int32(math.Round(res)))
}

func main(){
	reader := bufio.NewReaderSize(os.Stdin, 16 * 1024 * 1024)

	meal_cost, err := strconv.ParseFloat(strings.TrimSpace(readLine(reader)), 64)
	checkError(err)

	tip_percentTemp, err := strconv.ParseFloat(strings.TrimSpace(readLine(reader)), 10, 64)
	checkError(err)
	tip_percent := int32(tip_percentTemp)

	tax_percentTemp, err := strconv.ParseFloat(strings.TrimSpace(readLine(reader)), 10, 64)
	checkError(err)
	tax_percent := int32(tax_percentTemp)

	solve(meal_cost, tip_percent, tax_percent)
}

func readLine(reader *bufio.Reader) string {
	str, _, err := reader.ReadLine()
	if err == io.EOF{
		return ""
	}
	return strings.TrimRight(string(str), "\r\n")
}

func checkError(err error){
	if err != nil{
		panic(err)
	}
}