#include <iostream>

using namespace std;

class Punto {
public:
	int x;
	int y;
	Punto& operator-(/*Punto p1, es this*/ const Punto& p2) {
		Punto* p = new Punto();
		p->x = this->x - p2.x;
		p->y = this->y - p2.y;
		return *p;
	}
	friend Punto& operator+( Punto p1, const Punto& p2) {
		Punto* p = new Punto();
		p->x = p1.x + p2.x;
		p->y = p1.y + p2.y;
		return *p;
	}

};
int main() {
	Punto* p = new Punto();
	p->x = 1;
	p->y = 3;
	Punto* p3 =&(*p + *p);
	Punto* p4 = &(*p - *p);
	std::cout <<" " << p3->x << " " << p4->x  << std::endl;
    delete p;
    delete p3;
    delete p4;
}