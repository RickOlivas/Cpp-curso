#include <iostream>
#include <list>

/*Los clientes se pueden crear,modificar,eliminar y leer

Los usuarios solo se pueden leer

"/customers"
"/users"

crear
modificar
eliminar
leer

impriman el path*/
class Path{
    protected:
        std::string adress;
        std::list<std::string> list;
    public:
        Path(std::string adress) : adress(adress)
        {}

};

class Add : public Path{
	void Add(std::string adress_new) {
        list.emplace(adress_new);
        std::cout<< Path.list.front()<< endl;
        }
};
/*
class Update : public Path{
	update
    }
    */
class Remove : public Path{
	void remove (std::string adress) { 
            list.remove(adress);
            std::cout << "  Test::~Test()\n"; }
    };

class Get : public Path{
	void Get(int i){
        std::cout<< Path.list.front()<< endl;
        }
    };

class User: public Get{};
class Customer: public Add, Update, Remove, Get{};

int main()
{
    Customer c1("prueba");
    c1.Add("test");
}