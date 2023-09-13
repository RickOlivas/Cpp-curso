#include <iostream>
#include <vector>

class IShape{
	public:
		virtual int area()=0;
};
class Shape: public IShape{
	public:
		virtual int area(){return 0;}
};

class IAddCanvas{
	public:
		virtual void add(IShape* shape)=0;
};
class IRemoveCanvas{
	public:
		virtual void remove(IShape* shape)=0;
};

class Canvas:public IAddCanvas, public IRemoveCanvas{
	public:
		virtual void add(IShape* shape){

		};
		virtual void remove(IShape* shape){

		}
};

void CommandAdd(IAddCanvas* receiver, Shape* s ){	
	receiver->add(s);
}
void CommandRemove(IRemoveCanvas* receiver, Shape* s ){	
	receiver->remove(s);
}
int main()
{
	Canvas c;

	Shape s;

	CommandAdd(&c, &s);
	CommandRemove(&c, &s);
	
    return 0;
}