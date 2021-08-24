#include <iostream>
using namespace std;

class A {
public:
	virtual void f1() {}
};
class B: public A {
	void f1() {} // method overriding
};

int main()
{
	A*p, o1;
	B o2;
	p = &o2;
	o2.f1(); // B
	p->f1(); // B late binding
}