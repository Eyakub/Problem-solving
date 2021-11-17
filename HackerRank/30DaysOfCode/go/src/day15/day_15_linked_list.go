package main

import (
	"fmt"
)

type Node struct {
	data int
	next *Node
}

type Solution struct{}

func (l *Node) Init(data int) {
	l.data = data
	l.next = nil
}

func (s *Solution) insert(head *Node, data int) *Node {
	if head == nil {
		head = &Node{data: data}
		return head
	} else {
		current := head
		for current.next != nil {
			current = current.next
		}
		current.next = &Node{data: data}
	}
	return head
}

func (s *Solution) display(head *Node) {
	current := head
	for current != nil {
		fmt.Println(current.data)
		current = current.next
	}
}

func main() {
	var t int
	fmt.Scan(&t)

	var head *Node = nil
	s := Solution{}
	for i := 0; i < int(t); i++ {
		var dataTemp int
		fmt.Scan(&dataTemp)
		head = s.insert(head, dataTemp)
	}
	s.display(head)
}
