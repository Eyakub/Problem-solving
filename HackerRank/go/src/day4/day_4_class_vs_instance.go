package main

import (
	"fmt"
)

type person struct {
	age int
}

func (p person) NewPerson(initialAge int) person {
	p = person{age: initialAge}
	// p.age = initialAge
	if initialAge < 0 {
		fmt.Println("Age is not valid, setting age to 0.")
		p.age = 0
	}
	return p
}

func (p person) amIOld() {
	switch {
	case p.age < 13:
		fmt.Println("You are young.")
	case p.age >= 13 && p.age < 18:
		fmt.Println("You are a teenager.")
	default:
		fmt.Println("You are old.")
	}
}

func (p person) yearPasses() person {
	p.age++
	return p
}
func main() {
	var t, age int
	fmt.Scan(&t)

	for i := 0; i < t; i++ {
		fmt.Scan(&age)
		p := person{age: age}
		p = p.NewPerson(age)
		p.amIOld()
		for j := 0; j < 3; j++ {
			p = p.yearPasses()
		}
		p.amIOld()
		fmt.Println()
	}
}
