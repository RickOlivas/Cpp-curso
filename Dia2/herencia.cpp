#include <iostream>

class Persona {
    protected:
        std::string nombre;
        int edad;
    public:
        Persona (std::string nombre, int edad) : nombre(nombre), edad(edad){}
        int getEdad() {return edad;}
        std::string getNombre() {return nombre;}
        void saluda() {std::cout << "SOy persona" << std::endl;
            }

};

class Cliente : public Persona{
    private:
    std::string adress;
    public:
    Cliente (std::string nombre, int edad, std::string adress) : Persona(nombre,edad), adress(adress)
    {}
    std::string getAdress() {return adress;}
    void saluda() {std::cout << "SOy Clientee" << std::endl;
            }

};

int main(){
    Cliente c1 ("Rick", 28, "Calle123");
    std::cout <<c1.getNombre()<< " "<< c1.getEdad() << " " << c1.getAdress() << std::endl;

    Persona* p = new Cliente ("Rick", 28, "Calle123"); //ESTO FUNCIONA!
    p-> saluda();

    Cliente* c = new Cliente ("Rick", 28, "Calle123");
    c-> Persona::saluda();
}