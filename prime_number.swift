import Foundation
// Check weather the given number is prime or not?

func isPrime(_ num: Int) -> Bool{
	if num < 2 {
		return false
	} else {
		var div = 2
		while div < num {
			if num % div == 0 {
				return false
			}
			div += 1
		}
		return true
	}
}

let N = 101
if isPrime(N){
	print("Number is prime")
} else {
	print("Number is not prime")
}