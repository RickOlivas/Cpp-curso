#include <iostream>
//#include <memory>
//#include <mutex>

class Test
{
public:
	int x;    
	Test() { x = 99; std::cout << "  Test::Test()\n"; }
	~Test() { std::cout << "  Test::~Test()\n"; }
};

int main()
{
    /*
	std::shared_ptr<Test> ptr_sh= std::make_shared<Test>();
	std::cout << ptr_sh->x << std::endl;
    */
    Test * ptr_sh = new Test();
    std::cout << ptr_sh->x << std::endl;
    delete ptr_sh;
}