#include <iostream>
using namespace std;

int main()
{
	for (int i=0; i<10; i++)
	{
		//if (i==5) {continue;}
        //if (i==7) {break;}
        if (i!=5) {

            if (i==7) {
                i++;            
                
            }
            std::cout << i << std::endl;
		
        }
		//std::cout << i << std::endl;
	}
}