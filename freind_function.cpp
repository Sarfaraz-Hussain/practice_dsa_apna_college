#include <iostream>
using namespace std;

class Complex {
private:
	int a, b;
public:
	void setData(int a, int b)
	{
		this->a = a;
		this->b = b;
	}
	void showData()
	{
		cout << "a= " << a << " b= " << b << endl;
	}

	friend void fun(Complex);
};

void fun(Complex c)
{
	cout << "Sum is " << c.a + c.b << endl;
}

int main()
{
	Complex c1;
	c1.setData(3, 4);
	fun(c1);
}