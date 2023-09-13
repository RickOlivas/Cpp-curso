#include <iostream>

class Punto{
private:
	int x;
    int y;
public:

	Punto(int x, int y) { this->x = x; this->y =y; }
	int getx() { return x; }
    int gety() { return y; }
	//friend MiEntero operator+(const MiEntero& e1, const MiEntero& e2);
	Punto operator-() {
		return Punto(this->x - this->y);
	}
    Punto operator+() {
		return Punto(this->x + this->y);
	}
};
//MiEntero operator+(const MiEntero& e1, const MiEntero& e2) {
//	return MiEntero(e1.entero + e2.entero);
}
int main() {
	Punto e1(8,5);
	Punto e2(3,1);
    Punto e3 = e1.-;
	Punto e4 = e2.+;
	std::cout << e3() << " " << e4() << std::endl;
}