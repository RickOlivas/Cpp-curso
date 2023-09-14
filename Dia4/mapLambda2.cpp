
#include <iostream>
//#include <sstream>
#include <map>
#include<functional>
using namespace std;

int main()
{

    auto suma = [](int a, int b)->int{return a +b;};
	auto resta = [](int a, int b)->int{return a -b;}; 
    auto mult = [](int a, int b)->int{return a *b;};
	auto div = [](int a, int b)->int{return a/b;}; 

    map<char,function<int(int a, int b)>> miMap;
    miMap.insert(pair<char,function<int(int a, int b)>>('+',suma));
    miMap.insert(pair<char,function<int(int a, int b)>>('-',resta));
	miMap.insert(pair<char,function<int(int a, int b)>>('*',mult));
	miMap.insert(pair<char,function<int(int a, int b)>>('/',div));

    int aa = 4;
	int bb = 2;

	for (auto pair: miMap){
		cout << aa << pair.first<< bb << "= ";
		cout << pair.second(aa,bb) <<endl;
	}
    return 0;
}