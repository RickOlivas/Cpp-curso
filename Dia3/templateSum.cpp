/*
class Point
    x
    y
    sobrecargar el operador >

Vamos a preparar nuestra clase point para que sea capaz de utilizar la misma función
*/

#include <iostream>


template <typename T1>
T1 max(T1 a, T1 b) {
	return (a>b) ? a : b;
}

//template <typename T1> Podría poner template en la clase punto
class Punto{
private:
	int x;
    int y;
public:
	Punto(int x, int y) { this->x = x; this->y =y; }
	int getx() { return x; }
    int gety() { return y; }
    bool operator> (const Punto& p){
        int x2= x*x;
        int y2= y*y;
        int mod = x2 +y2;
        int a2= p.x*p.x;
        int b2= p.y*p.y;
        int modext = a2 +b2;
        return ((mod>modext));

    }
};

int main() {
	Punto e1(3,1);
	Punto e2(3,2);
    Punto maximo = max(e1,e2);
    std::cout << maximo.getx() << " " << maximo.gety() << std::endl;
}