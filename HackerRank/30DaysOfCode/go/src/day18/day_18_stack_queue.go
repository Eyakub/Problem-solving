package main

import (
	"bufio"
	"container/list"
	"fmt"
	"io"
	"os"
	"strings"
)

type Solution struct {
	stack *list.List
	queue *list.List
}

func (s *Solution) pushCharacter(ch string) {
	s.stack.PushFront(ch)
}

func (s *Solution) enqueCharacter(ch string){
	s.queue.PushBack(ch)
}

func (s *Solution) popCharacter() string {
	ele := s.stack.Front()
	s.stack.Remove(ele)
	return ele.Value.(string)
}

func (s *Solution) dequeuedCharacter() string {
	ele := s.queue.Front()
	s.queue.Remove(ele)
	return ele.Value.(string)
}

func readLine(reader *bufio.Reader) string {
	str, _, err := reader.ReadLine()
	if err == io.EOF {
		return ""
	}

	return strings.TrimRight(string(str), "\r\n")
}


func main(){
	reader := bufio.NewReaderSize(os.Stdin, 1024*1024)

	inp_str := readLine(reader)
	s := Solution{}
	for i:=0; i<len(inp_str); i++ {
		s.pushCharacter(string(inp_str[i]))
		s.enqueCharacter(string(inp_str[i]))
	}

	isPalindrome := true

	fmt.Println(s.stack)
	fmt.Println(s.queue)
	for i:=0; i<len(inp_str)/2; i++ {
		if s.popCharacter() != s.dequeuedCharacter() {
			isPalindrome = false
			break
		}
	}

	if isPalindrome {
		fmt.Println("The word, "+inp_str+", is a palindrome.")
	} else {
		fmt.Println("The word, "+inp_str+", is not a palindrome.")
	}
}