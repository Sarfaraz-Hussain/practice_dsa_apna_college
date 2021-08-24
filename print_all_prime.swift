import Foundation

func isPrime(_ num: Int) -> Bool {
	if num < 2 {
		return false
	}else {
		var div = 2
		while div < num {
			if(num % div == 0){
				return false
			}
			div += 1
		}
		return true
	}
}


func printAllPrimeNumbers(_ N: Int) -> Void {
	if N < 2{
		return
	}
	var num = 2
	while num < N {
		if isPrime(num) {
			print(num, terminator: " ")
		}
		num += 1
	}
	print("\n")
}



let N = 100
printAllPrimeNumbers(N)
