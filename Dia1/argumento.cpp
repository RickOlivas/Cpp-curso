#include <iostream>

class Test {
public:
	int x;
};
void f(Test* t1, Test* t2) {
	t1->x = 99;
	t2 = t1;
}
int main()
{
	Test* t1 = new Test();
	t1->x = 0;
	Test* t2 = new Test();
	t2->x = 1;
	f(t1, t2);
	std::cout << t1->x << t2->x << std::endl;
}