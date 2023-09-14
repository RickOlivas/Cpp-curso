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
	Punto operator+(Punto &p) {
		return Punto(x + p.x, y + p.y);
	}
	Punto operator-(Punto &p) {
		return Punto(x - p.x, y - p.y);
	}
    bool operator==(const Punto& p){
        return (x == p.x && y ==p.y);
    }
};
//MiEntero operator+(const MiEntero& e1, const MiEntero& e2) {
//	return MiEntero(e1.entero + e2.entero);

int main() {
	Punto e1(8,5);
	Punto e2(3,1);
    Punto e3 = e2- e1;
	Punto e4 = e1 + e2;
	std::cout << e3.getx() << " " << e3.gety() << std::endl;
    std::cout << e4.getx() << " " << e4.gety() << std::endl;

    Punto c1(8,5);
	Punto c2(8,5);
    if (c1 ==c2){
        std::cout << "son iguales " << std::endl;
    }
    else
        std::cout << "No son iguales " << std::endl;
}