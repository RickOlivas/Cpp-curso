#include <iostream>

int max(int x, int y) {
	return (x > y ? x : y);
}

int f (int a){
    std::cout << "Argumento: " << a << std::endl;
    return a;
}
int main()
{
	//int (*puntero_f)(int, int);
	//puntero_f = max;
    /*
    auto puntero_max = max;  //esto funciona igual que lo anterior.
    std::cout << (*puntero_max)(3, 4) << std::endl;
    auto pf = max;
    *pf = f; // no va a funcionar si los tipos de f son distintos a los de max
    */
   auto puntero_f= {f,f,f};
   /* MAL
    puntero_f[0] = f(10);
    puntero_f[1] = f(22);
    puntero_f[2] = f(33);
    */
   int j = 2;
    for (auto i:puntero_f)
    {
        i(j);
        j++;
    }
    
}