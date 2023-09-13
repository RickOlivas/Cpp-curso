#include <iostream>

class A
{
public:
    void m() { std::cout << "M" <<std::endl; }
};

class B : public A
{
private:
    using A::m; //redeclaration

public:
    void n() { A::m();}
};

int main() {

    A a;
    B b;
    a.m();
//    b.m();
    b.n();
    return 0;
}