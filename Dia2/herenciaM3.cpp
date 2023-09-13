#include <iostream>

using namespace std;

class Path
{
protected:
	Path(string path):path(path){

	}
	Path(){}
	string path;
};

class Add : virtual  public Path
{
public:	
	void add()
	{
		cout << this->path;
	}
};

class Update :  virtual public Path
{
public:
	
	void update()
	{
		cout << this->path;
	}
};

class Remove :  virtual public Path
{
public:	
	void remove()
	{
		cout << this->path;
	}
};

class Get : virtual  public Path
{
public:	
	void get()
	{
		cout << this->path;
	}
};

class Customer : 
	public Add, 
	public Update , 
	public Remove, 
	public Get
{
public:
	Customer(string path):Path(path)
	{
		
	}
};

class User : public Get
{
public:
	User(string path):Path(path) {
		
	}
};
int main()
{
	Customer customer("/customers");
	
	User user("/users");
	
	return 0;
}