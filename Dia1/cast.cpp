#include <iostream>

int main()
{
    char dividendo ="5";
    int divisor=2;
    double resultado = (double) dividendo/divisor;
    std::cout << "resul1 " <<resultado << std::endl;
    double resultado2 = static_cast<double> (dividendo)/ static_cast<double> (divisor);
    std::cout << "resul2 " <<resultado2 << std::endl;
    return 0;
}