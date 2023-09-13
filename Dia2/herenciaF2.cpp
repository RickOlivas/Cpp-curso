#include <iostream>

class Ave
{
protected:
	int peso;

public:
	Ave(int peso): peso(peso) {}
	
	virtual void pia() const = 0;
};

class AveVoladora: public Ave
{
protected:
	int velocidad;

public:
	AveVoladora(int peso, int velocidad)
		: Ave(peso), velocidad(velocidad) {}

	virtual void vuela() const = 0;	
};

class Pinguino: public Ave
{
public:
	Pinguino(): Ave(5) {}
	void pia() const override { std::cout << "Soy un pingüino" << std::endl; }
};

class Aguila: public AveVoladora
{
public:
	Aguila(): AveVoladora(5, 100) {}	
	void pia() const override { std::cout << "Soy un aguila" << std::endl; }
	void vuela() const override { std::cout << "El aguila vuela" << std::endl; }
};

void printAve(const Ave& ave)
{
	ave.pia();
}

void printAveVoladora(const AveVoladora& ave)
{
	ave.vuela();
}

int main()
{
	Pinguino p;
	Aguila a;

	printAve(p);
	printAve(a);	
	printAveVoladora(a);

	return 1;
}