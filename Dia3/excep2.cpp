#include <iostream>

int main()
{
	try
	{
		throw 'x';
	}
	catch (int)
	{
		std::cerr << "error de tipo int "<< std::endl;
	}
	catch (double d)
	{
		std::cerr << "error de tipo " << typeid(d).name() << std::endl;
	}
	catch (char c)
	{
		std::cerr << "error " <<c <<" de tipo " << typeid(c).name() << std::endl;
	}
	return 0;
}