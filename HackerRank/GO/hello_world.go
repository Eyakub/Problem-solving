package main

import (
	"bufio"
	"fmt"
	"os"
)

func main() {

	scanner := bufio.NewReader(os.Stdin)
	text, _ := scanner.ReadString('\n')

	fmt.Println("Hello, World.")
	fmt.Println(text)
}