#include <iostream>

class Prueba {
public:
	int x;
	Prueba(int x){ this->x = x;}
	int getX() const { return x; }
	void setX(int x) { this->x = x; }
};
int main()
{
	const Prueba* p = new Prueba(3);
	std::cout << p->getX()  << std::endl;
}