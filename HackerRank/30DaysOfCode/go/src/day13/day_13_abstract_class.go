package main

import (
	"bufio"
	"fmt"
	"io"
	"os"
	"strconv"
	"strings"
)

type Book interface {
	display()
}

type MyBook struct {
	Book
	title  string
	author string
	price  int64
}

func (mb *MyBook) display() {
	fmt.Println("Title:", mb.title)
	fmt.Println("Author:", mb.author)
	fmt.Println("Price:", mb.price)
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

	title := readLine(reader)
	author := readLine(reader)
	price, err := strconv.ParseInt(readLine(reader), 10, 64)
	checkError(err)

	new_novel := &MyBook{title: title, author: author, price: price}
	new_novel.display()
}
