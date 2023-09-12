#include <iostream>
/*
void f(int &ref, int noref)
{
	noref = 6;
	ref = 6;
}
int main()
{
	int n1 = 5;
	int n2 = 5;
	std::cout << n1 << n2 << '\n';
	f(n1, n2);
	std::cout << n1 << n2 << '\n';
	return 0;
}
*/
int& f(int &x, int &y)
{
	if (x>y)
		return x;
	return y;
}

int main()
{
	int n1 = 1;
	int n2 = 4;
	std::cout << n1 << n2 << '\n';
	f(n1, n2)=5;
	std::cout << n1 << n2 << '\n';
	return 0;
}