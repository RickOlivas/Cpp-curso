
/*
Crear un map donde la clave es la prefijo
y el valor una funcion que imprime la provincia

91-Madrid
93-Barcelona


Crear una funcion que pasando el prefijo
ejecute la funcion que imprima
para 91->Madrid y 93->Barcelona

Refactoring Patter->switch to strategy

La funcion tiene que ser una lambda
*/
#include <iostream>
//#include <sstream>
#include <map>
#include<functional>
using namespace std;

/*
string print_city(int i)
{
    switch (i):
	case 91:
		return "Madrid"
	break;
	case 93:
		return "Barcelona"
	break:

	default:
	return "Error"
}
*/
int main()
{
	/*
	using namespace std;
	map<int,string> miMap;
	for (int i = 0; i < 3; i++)
	{
		std::stringstream ss;
		ss << "Soy el " << i;
		miMap.insert( std::pair<int, string>(i, ss.str()) );
	}
	for (map<int, string>::iterator ii = miMap.begin(); ii != miMap.end(); ++ii)
	{
			cout << (*ii).first << ": " << (*ii).second << endl;
	}

	cout << endl;
	*/
	//auto = std::function<void()
    auto f_print_mad = []()->void{cout << "Madrid" << endl;}; // parentesis opcional ya que no tiene argumentos y flecha void opcional para indicar que no devuelve nada
    auto f_print_bcn = []{cout << "Barcelona" << endl;};

    map<int,function<void()>> miMap;
    miMap.insert(pair<int,function<void()>>(91,f_print_mad));
    miMap.insert(pair<int,function<void()>>(93,f_print_bcn));

    miMap.at(91)();
    miMap.at(93)();

	for (auto pair: miMap){
		cout <<pair.first<<endl;
		pair.second();
	}
    return 0;
}