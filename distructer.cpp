#include <iostream>
using namespace std;

class Rectangle {
private:
	int l, b;
public:
	~Rectangle()  // desturter is takes nothingand retruns nothng nature that's why overloading is not possible
	{
		cout << "Fired" << endl;
	}
};

int main()
{
	Rectangle r;
}