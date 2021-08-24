#include <iostream>
using namespace std;


void printPattern(int rows, int columns)
{
	int count = 0;
	for (int row = 1; row <= rows; ++row) {
		for (int col = 1; col <= columns - count; ++col) {
			cout << "*" << " ";
		}
		count++;
		cout << endl;
	}
}



int main()
{
	int rows, columns;
	cin >> rows >> columns;
	printPattern(rows, columns);
	return 0;
}