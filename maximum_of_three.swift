import Foundation

// function to find out maximum of three

func findMaximumOfThree(_ a: Int, _ b:Int, _ c:Int) -> Int {
	if a > b {
		if a > c{
			return a
		}
		else {
			return c
		}
	}
	else {
		if b > c{
			return b
		} else {
			return c
		}
	}
}

print(findMaximumOfThree(3,4,5))