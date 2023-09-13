#include <iostream>

class Base
{
protected:
	Base(const std::string& nombre): nombre(nombre) { std::cout << "constructor base" << std::endl;  }

	std::string nombre;
	virtual std::string getPath() = 0;		
};

class Modificador: virtual public Base
{
public:		
	Modificador() { std::cout << "constructor modificador" << std::endl; }
	virtual void crear() { std::cout << "crear " << getPath() << std::endl; }
	virtual void borrar()  { std::cout << "borrar " << getPath() << std::endl; }
	virtual void modificar() { std::cout << "modificar " << getPath() << std::endl; }
};

class Lector: virtual public Base
{
public:	
	Lector() { std::cout << "constructor lector" << std::endl;  }
	void leer() { std::cout << "leer " << getPath() << std::endl; }
};

class Usuario: public Lector
{
public:
	Usuario(const std::string& nombre): Base(nombre) {}
	std::string getPath() { return "/usuarios/" + nombre; }
};

class Customer: public Lector, public Modificador
{
public:	
	Customer(const std::string& nombre): Base(nombre) {}
	std::string getPath() { return "/customers/" + nombre; }
};

int main()
{
	Customer customer("/customers");
	
	Usuario user("/users");
    
	
	return 0;
}