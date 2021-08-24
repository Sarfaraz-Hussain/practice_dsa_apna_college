#include <iostream>
using namespace std;


void printPattern(int rows, int columns)
{
	for (int row = 1; row <= rows; ++row)
	{
		if (row == 1 || row == rows)
		{
			for (int col = 1; col <= columns; ++col)
				cout << "*";
		} else {
			for (int col = 1; col <= columns; ++col)
			{
				if (col == 1 || col == columns)
					cout << "*";
				else
					cout << " ";
			}
		}
		cout << endl;
	}

}

int main() {
	int rows, columns;
	cin >> rows >> columns;
	printPattern(rows, columns);
	return 0;
}