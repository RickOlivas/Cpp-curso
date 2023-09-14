/*
dada una lista que contiene los valores 1,2,3

calcular el min,max,count,sum con el 
algoritmo reduce
*/
#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <numeric>
//#include <execution> NO TENEMOS ESTA LIBRERIA


int main()
{
	//using namespace std;

/*
    std::vector nums {32,16,8, 4, 2, 1};
    std::cout << std::accumulate(nums.begin()+1, nums.end(), *nums.begin(), std::minus<>{}) <<'\n';
    std::cout << std::reduce(nums.begin()+1, nums.end(),*nums.begin(), std::minus<>{}) <<'\n';
*/

    std::list<int> numsl = { 1, 2, 3, 4, 5 };
    
    std::cout << std::reduce(numsl.begin(), numsl.end(), 0, [](int suma, int x)->int { return suma + x; } ) << std::endl;

using namespace std;
    auto min = []( const int num1,  int num2)
    { 
        cout<< "value: " << num1<<endl;
        cout<< "acumulado: " << num2<<endl;   
             
        if(num1==0){
            return num2;
        }
        return num2>num1?num1:num2;
    };

    auto max = []( const int num1,  int num2)
    { 
        cout<< "value: " << num1<<endl;
        cout<< "acumulado: " << num2<<endl;   

        
        return num2>num1?num2:num1;
    };

    auto sum = []( const int num1,  int num2)
    { 
        cout<< "value: " << num1<<endl;
        cout<< "acumulado: " << num2<<endl;   

        
        return num2+num1;
    };

    int init =1;
    auto count = [&init](  int num1,  int num2)
    { 
        cout<< "value: " << num1<<endl;
        cout<< "acumulado: " << num2<<endl;  
        
        return init++;
    };

        int result = reduce (numsl.begin(), numsl.end(), 0 , max);
        cout << "resultado max: " << result << endl;
        result = reduce (numsl.begin(), numsl.end(), 0 , min);
        cout << "resultado min: " << result << endl;
        result = reduce (numsl.begin(), numsl.end(), 0 , sum);
        cout << "resultado sum: " << result << endl;
        result = reduce (numsl.begin(), numsl.end(), 0 , count);
        cout << "resultado count: " << result << endl;

}
