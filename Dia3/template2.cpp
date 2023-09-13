#include <iostream>


/*
template <typename T1, typename T2>
class iGeneric{
    public:
};
*/
template <typename T2>
class IAdd{
	public:
		virtual void add(T2* gen)=0;
};

template <typename T1>
class IGet{
	public:
		virtual void get(T1* gen)=0;
};
/*
class IUpdate{
	public:
		virtual void remove(iGeneric* gen)=0;
};
*/

template <typename T1, typename T2>
class Generic : public IAdd<T2>, public IGet<T1>{
    private:
    T1 t1;
	T2 t2;
public:
	Generic(T1 t1,T2 t2) {this->t1=t1; this->t2=t2;}
	T1 getT1(){return t1;}
	T2 getT2(){return t2;}
    virtual void add(T1 * gen){
        std::cout<< "add"<< std::endl;
		};
    virtual void get(T2* gen){
        std::cout<< "get"<< std::endl;
    };
};
template <typename T2>
void CommandAdd(IAdd<T2>* receiver, T2* entidad ){	
	receiver->add(entidad);
}
template <typename T1>
void CommandGet(IGet<T1>* receiver, T1* id ){	
	receiver->get(id);
}
int main()
{
    Generic<int,int> g =  Generic<int,int>(12, 1);
    //ME FALLA ESTO:
    //Generic<int,char> g =  Generic<int,char>(12, 'X');
    int id2= 5;
    int entidad2= 2;

	CommandAdd(&g, &id2);
	CommandGet(&g, &entidad2);
	
    return 0;
}