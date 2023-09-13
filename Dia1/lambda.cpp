#include <iostream>

/*
Pasar el siguiente código a c++
function sum(a){
   return funcion(b){
      return a+b
   }
}

sum(5)(3)
*/
/*
auto lambda = [](auto a, auto b) { return a + b; };
auto clousure (int x){
    return (sum())
}
*/
auto sum (int a){  
    return[a](int b){
        return a +b;
        };
}


int main()
{
    auto result = sum(5);
    int a = result(100);
    int b = result(30);
    std::cout << a << " " << b << std::endl;

}