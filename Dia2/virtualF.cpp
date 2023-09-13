#include <iostream>

class A {
public:
	virtual void saluda() = 0;
	virtual ~A() { std::cout << "A borrado" <<std::endl;}
};
class B: public A {
public:
	virtual void saluda() { std::cout << "Hola B" << std::endl; }
	virtual ~B() { std::cout << "B borrado" <<std::endl;}
};
int main(){
	A* a = new B();
	a->saluda();
}