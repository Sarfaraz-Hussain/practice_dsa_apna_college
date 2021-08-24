import Foundation
// closure declaration
var multiplyNumbers: (Int, Int) -> Int

// closure definition

// long closure
multiplyNumbers = {
	(a: Int, b: Int) -> Int in 
	return a * b
}


// short closure 

multiplyNumbers = {
	(a,b) -> Int in 
	a * b
}

multiplyNumbers = {
	(a,b) in 
	a * b
}

// very short closure
multiplyNumbers = {
	$0 * $1
}

print(multiplyNumbers(4,3))
