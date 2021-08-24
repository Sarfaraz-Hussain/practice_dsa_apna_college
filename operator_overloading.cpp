#include <iostream>
using namespace std;

class Complex {
private:
	int a, b;
public:
	void setData(int a, int b);
	void showData();
	Complex operator+(Complex c) {
		Complex temp;
		temp.a = a + c.a;
		temp.b = b + c.b;
		return temp;
	}

};

void Complex:: setData(int a, int b)
{
	this->a = a;
	this->b = b;
}

void Complex:: showData()
{
	cout << "a= " << a << " b= " << b << endl;
}


int main()
{
	Complex c1, c2, c3;
	c1.setData(3, 2);
	c2.setData(4, 5);
	c3 = c1.operator + (c2);
	c3.showData();
	return 0;
}