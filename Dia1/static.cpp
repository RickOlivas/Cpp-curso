#include <iostream>
static int x=0;
void funcionCuriosa()
{

std::cout << x++ << std::endl;;
}
int main()
{
	funcionCuriosa();
	funcionCuriosa();
	funcionCuriosa();
}