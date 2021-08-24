#include <iostream>
using namespace std;


class Rectangle {
private:
	int l;
	int b;
public:
	Rectangle(int l, int b);
	void setter(int l, int b);
	void getter()
	{

	}
	int area()
	{
		return l * b;
	}
	int perimeter()
	{
		return 2 * (l + b);
	}
};

Rectangle:: Rectangle(int l, int b)
{
	this->l = l;
	this->b = b;
}

void Rectangle:: setter(int l, int b)   // Rectangle:: membership level
{
	this->l = (l < 0 ? -1 * l : l);
	this->b = (b < 0 ? -1 * b : b);

}

int main()
{
	Rectangle r(3, 4);
	cout << r.area() << endl;
}
