#include <iostream>
#include <vector>

class AveItf
{
public:
    virtual void print() = 0;
};

class Ave : public AveItf
{

public:
   
    //virtual void print() { std::cout << "Ave con peso: " << _peso << " \n"; }
protected:
    int _peso;
     Ave(int peso) : _peso(peso) {}
};

class AveVoladora : public Ave
{
public:

    //virtual void print() { std::cout << "Ave Voladora con peso: " << _peso << " y velocidad: " << _speed << "\n"; }
protected:
    int _speed;
    AveVoladora(int peso, int speed) : Ave(peso), _speed(speed) {}
};

class Aguila : public AveVoladora
{
public:
    Aguila(int peso, int velocidad) : AveVoladora(peso, velocidad) {}
    virtual void print() { std::cout << "Aguila con peso: " << _peso << " y velocidad: " << _speed << "\n"; }
};

class Pinguino : public Ave
{
public:
    Pinguino(int peso) : Ave(peso) {}
    virtual void print() { std::cout << "Pinguino con peso: " << _peso << " \n"; }
};

void Imprimir(AveItf* v)
{
        v->print();
}

void ImprimirVoladora(std::vector<AveVoladora*> &v)
{
    for(const auto p : v)
    {
        p->print();
    }
}

int main()
{
    Aguila a(10, 100);
    Pinguino p(5);

    std::vector<AveItf*> v;
    v.push_back(&a);
    v.push_back(&p);
    for(const auto i : v)
    {
        Imprimir(i);
    }

    std::vector<AveVoladora*> vv;
    vv.push_back(&a);
    // vv.push_back(&p);
    ImprimirVoladora(vv);

    return 0;
}