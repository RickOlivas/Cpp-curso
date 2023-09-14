#include <iostream>
#include <typeinfo>       // operator typeid
#include <exception>      // std::exception

int main()
{
	try
	{
		std::exception e('A');
		throw e;
	}
	catch (std::exception &cException)
	{
		std::cerr << "Mensaje de exception: " << cException.what() << std::endl;
	}
}

//NO FUNCIONA VER POR QUÉ