/*En el mundo de las aves existen pinguinos que pesan 5 kg y Aguilas que pesan
10 kg y vuelan a 100 km/h

Aparte de las clases necesarias

crear una funcion que imprima cualquier ave
crear una funcion que solo imprima las que vuelan*/
#include <iostream>

using namespace std;



class Ave {
    protected:
    int peso;
public:
    Ave(int peso) : peso(peso){};
    int getPeso(){return peso;}
	virtual void printAves() = 0;

};

class AveNoVoladora: public Ave {
    protected:

public:
    AveNoVoladora(int peso) : Ave(peso) {}
	virtual void printAves() { std::cout << "Hola Aves que no vuelan" << std::endl; }

};
class AveVoladora: public Ave {
    protected:
    int velocidad;
public:
    AveVoladora(int peso, int velocidad) : Ave(peso), velocidad(velocidad){}
    int getVelocidad(){return velocidad;}
	virtual void printAves() { std::cout << "Hola voladoras" << std::endl; }
};
int main()
{
	AveNoVoladora pingu(5);
    AveVoladora aguila(10,100);
    pingu.printAves();
    aguila.printAves();
    cout << "Pinguino datos: " << pingu.getPeso() << " Aguila datos: "<< aguila.getPeso()<< " " << aguila.getVelocidad() << endl;
}