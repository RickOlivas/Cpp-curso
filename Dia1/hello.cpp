#include <iostream>
using namespace std;

/*
auto f(float x){
    auto x2 = x *2;
    cout << "Resultado  " << x2 << endl;
    return 0;
}
*/
int main (){
    cout << "Hello world"<< endl;

//    f(2.2);


	int x=3;
	int z=9;
	{
		int x=4;//esta declaración "oculta" la declaración previa de x
		std::cout << x << z << std::endl;//imprimirá "49", pues z sigue siendo accesible
	}
	std::cout << x << z << std::endl;//imprimirá "39" ya que la "redefinición" de x finaliza al finalizar su bloque
    return 0;
}


