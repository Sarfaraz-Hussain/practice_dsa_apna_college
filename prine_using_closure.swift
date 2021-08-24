import Foundation
// Check weather a number is prime or not using swift in clousre

// closure declaration
var isPrime: (Int) -> Bool

isPrime = {
	let N = $0
	if N < 2{
		return false
	} else {
		var div = 2
		while div < N {
			if(N % div == 0){
				return false
			}
			div += 1
		}
		return true
	}

}

let N = 101
if isPrime(N){
	print("Prime Number")
} else{
	print("Not a Prime Number")
}