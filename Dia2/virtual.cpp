#include <iostream>

class A {
public:
	void saluda() { std::cout << "Hola A" << std::endl; }
};
class B: public A {
public:
	void saluda() { std::cout << "Hola B" << std::endl; }
};


int main()
{
    B* b=new B();
	A* a=b;
	A& ref_a=*a;
	b->saluda();
	a->saluda();
	ref_a.saluda();

    B* bb=new B();
	A* aa=bb;
	bb->saluda();
	(static_cast<B*>(aa))->saluda();
}