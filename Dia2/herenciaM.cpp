#include <iostream>

using namespace std;

class Path
{
protected:
	string path;
	Path(){
		cout << "constructor" << endl;
	}	
};

class Add : virtual  public Path
{
public:
	Add() {}
	void add()
	{
		cout << this->path<< endl;
	}
};

class Update :  virtual public Path
{
public:
	Update() {}
	void update()
	{
		cout << this->path<< endl;
	}
};

class Remove :  virtual public Path
{
public:
	Remove(){}
	void remove()
	{
		cout << this->path<< endl;
	}
};

class Get : virtual  public Path
{
public:
	Get() {}
	void get()
	{
		cout << this->path<< endl;
	}
};

class Customer : 
	public Add, 
	public Update , 
	public Remove, 
	public Get
{
public:
	Customer(string path)
	{
		this->path = path;
	}
};

class User : public Get
{
public:
	User(string path)  {
		this->path=path;
	}
};
int main()
{
	Customer customer("/customers");
	
	User user("/users");
    
	
	return 0;
}