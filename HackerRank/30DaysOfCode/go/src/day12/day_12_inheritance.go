package main

import (
	"bufio"
	"fmt"
	"io"
	"os"
	"strconv"
	"strings"
)

type Person struct {
	firstName string
	lastName  string
	id        string
}

type Student struct {
	Person
}

func (p *Person) printInfo() string {
	return "Name: " + p.firstName + ", " + p.lastName + "\nID: " + p.id
}

func (s *Student) calculate(lst []int64) string {
	var avg float64
	var sum int64
	for _, v := range lst {
		sum += v
	}
	avg = float64(sum) / float64(len(lst))
	if avg >= 90 {
		return "O"
	} else if avg >= 80 {
		return "E"
	} else if avg >= 70 {
		return "A"
	} else if avg >= 55 {
		return "P"
	} else if avg >= 40 {
		return "D"
	} else {
		return "T"
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
	var firstName, lastName, id string
	var scores []int64
	inp := readLine(reader)
	info := strings.Split(inp, " ")

	firstName = info[0]
	lastName = info[1]
	id = info[2]

	nTemp, err := strconv.ParseInt(readLine(reader), 10, 64)
	checkError(err)
	n := int64(nTemp)

	for i := 0; i < int(n); i++ {
		scoreTemp, err := strconv.ParseInt(readLine(reader), 10, 64)
		checkError(err)
		scores = append(scores, scoreTemp)
	}

	p := Person{firstName, lastName, id}
	fmt.Println(p.printInfo())

	s := Student{p}
	fmt.Println(s.calculate(scores))
}
