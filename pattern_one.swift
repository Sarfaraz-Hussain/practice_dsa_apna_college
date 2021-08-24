import Foundation

func printPattern(_ rows: Int, _ colmns: Int) -> Void {
	for _ in 1...rows{
	for _ in 1...colmns{
		print("*",terminator: " ")
	}
	print(terminator:"\n")
	}
}


let rows = 5
let colmns = 5
printPattern(rows,colmns)