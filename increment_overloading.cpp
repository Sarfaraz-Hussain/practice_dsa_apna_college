#include <iostream>
using namespace std;

class Complex {
private:
	int a;
	int b;
public:
	void setData(int a, int b)
	{
		this->a = a;
		this->b = b;
	}
	void showData()
	{
		cout << "a = " << a << " b= " << b << endl;
	}
	Complex operator++()
	{
		Complex temp;
		temp.a = a++;
		temp.b = b++;
		return temp;
	}
};


int main()
{
	Complex c1, c2;
	c1.setData(3, 4);
	c2 = ++c1;
	c2.showData();
	c1.showData();
}