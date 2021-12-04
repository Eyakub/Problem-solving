package main

import (
	"fmt"
)

type AdvanceArithmetic interface {
	divisorSum(int) int
}

type Calculator struct {
	AdvanceArithmetic
}

func (c *Calculator) divisorSum(n int) int {
	sum := 0
	for i := 1; i <= n; i++ {
		if n%i == 0 {
			sum += i
		}
	}
	return sum
}

func main() {
	var n int
	fmt.Scan(&n)
	var c Calculator
	fmt.Println(c.divisorSum(n))
}
