#include <iostream>
using namespace std;

void f (char * str){
//    str = "nuevo";
	cout << str << '\n';}
int main () {
  const char * c = "algo";
  f ( const_cast<char *> (c) );
  return 0;
}