package main

import (
	"bufio"
	"fmt"
	"io"
	"os"
	"strings"
)

type Solution struct {
	stack []string
	queue []string
}

func (s *Solution) pushCharacter(ch string) {
	s.stack = append(s.stack, ch)
}

func (s *Solution) enqueCharacter(ch string) {
	s.queue = append(s.queue, ch)
}

// pop character means LIFO (plates)
func (s *Solution) popCharacter() string {
	ele := strings.Join(s.stack[len(s.stack)-1:len(s.stack)], "") // slice the last element
	copy(s.stack[len(s.stack)-1:], s.stack[len(s.stack):])        // copy the last element to the end of the slice
	s.stack[len(s.stack)-1] = ""                                  // delete the last element
	s.stack = s.stack[:len(s.stack)-1]                            // truncate slice
	return ele
}

// deque character means FIFO (ticket line)
func (s *Solution) dequeuedCharacter() string {
	ele := s.queue[0]                                      // getting the first character
	copy(s.queue[len(s.queue)-1:], s.queue[len(s.queue):]) // copy from index[1] element to the end of the slice
	s.queue[0] = ""                                        // delete the first element
	s.queue = s.queue[1:len(s.queue)]                      // truncate slice to the end
	return ele
}

func readLine(reader *bufio.Reader) string {
	str, _, err := reader.ReadLine()
	if err == io.EOF {
		return ""
	}

	return strings.TrimRight(string(str), "\r\n")
}

func main() {
	reader := bufio.NewReaderSize(os.Stdin, 1024*1024)

	inp_str := readLine(reader)
	s := Solution{}
	for i := 0; i < len(inp_str); i++ {
		s.pushCharacter(string(inp_str[i]))
		s.enqueCharacter(string(inp_str[i]))
	}

	isPalindrome := true

	for i := 0; i < len(inp_str)/2; i++ {

		if s.popCharacter() != s.dequeuedCharacter() {
			isPalindrome = false
			break
		}
	}

	if isPalindrome {
		fmt.Println("The word, " + inp_str + ", is a palindrome.")
	} else {
		fmt.Println("The word, " + inp_str + ", is not a palindrome.")
	}
}
