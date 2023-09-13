#include <iostream>

void votar(int edad) {
	if (edad < 18) {
		throw "No tiene edad para votar";
	}
	else
	{
		std::cout << "Ha votado correctamente" << std::endl;
	}
}
int main()
{
	try {
		votar(80);
		votar(23);
		votar(12);
		votar(53);
	}
	catch (char * excepcion) {
		std::cout << excepcion << std::endl;
	}
	return 0;
}