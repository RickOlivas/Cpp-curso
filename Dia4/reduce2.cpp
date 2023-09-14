#include <map>
#include <iostream>
#include <functional>
#include <list>
#include <numeric>

using namespace std;

int main()
{
	using namespace std;

    list<int> miLista {1, 5, -30};

    list<int>::iterator it;

	cout << "El maximo de la lista es: " << reduce(miLista.begin(), miLista.end(),0, [](int& a, int& b)->int { return a > b ? a : b; } ) << endl;
    cout << "El minimo de la lista es: " << reduce(miLista.begin(), miLista.end(),INT32_MAX, [](int& a, int& b)->int { return a < b ? a : b; } ) << endl;
    cout << "El nº de elementos de la lista es: " << reduce(miLista.begin(), miLista.end(),0, [](int& a, int& b)->int { return a + 1; } ) << endl;
    cout << "La suma de los elementos de la lista es: " << reduce(miLista.begin(), miLista.end(),0, [](int& a, int& b)->int { return a + b; } ) << endl;


	return 0;
}