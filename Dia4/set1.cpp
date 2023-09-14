#include <iostream>
#include <set>
using namespace std;

class Foo{
    public:
        Foo(int id):id(id){}
        int getId(){return this->id;}
        bool operator< (const Foo& f) const{ //means the method will not modify any member variables of the class (unless the member is mutable).
            return (id<f.id);
        }
        /* Estos operadores no los utiliza para ordenar
        bool operator> (const Foo& f) const{
            return (id>f.id);
        }
        bool operator== (const Foo& f) const{
            return (id==f.id);
        }
        */
    private:
        int id;
};

int main()
{
	using namespace std;
	set<int> miSet;
    miSet.insert(1);
    miSet.insert(1);
    miSet.insert(2);

	for (auto i : miSet)
	{
		cout << i << " " << endl;
	}

    set<Foo> setFoo;
    setFoo.insert(Foo(1));
    setFoo.insert(Foo(1));
    setFoo.insert(Foo(2));
/*
    set<Foo>::iterator fooIt;

    for(fooIt = setFoo.begin(); fooIt != setFoo.end(); fooIt++) {
    std::cout << (*fooIt).getId<< std::endl;
  }
*/

    for (auto i : setFoo)
	{
		cout << i.getId() << endl;
	}


}