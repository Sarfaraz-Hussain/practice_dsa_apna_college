#include <iostream>
using namespace std;

class Rectangle {
private:
	int l;
	int b;
public:
	Rectangle(int l, int b);  // contructer does not have any return type
	Rectangle(int l);   // constructer name is same but signature is different
	Rectangle();
	Rectangle(Rectangle &r) {
		l = r.l;
		b = r.b;
	}
	int area();
};

Rectangle:: Rectangle(int l, int b)
{
	this->l = l;
	this->b = b;
}


Rectangle:: Rectangle(int l)
{
	this->l = l;
	this->b = 1;
}

Rectangle:: Rectangle()
{
	cout << "Default contructer is fired" << endl;
}


int Rectangle:: area()
{
	return l * b;
}

int main()
{
	Rectangle r1(3, 4), r2(4), r3;
	Rectangle r4(r1);
	cout << r1.area() << endl;
	cout << r2.area() << endl;

}