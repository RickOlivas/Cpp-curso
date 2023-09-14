#include <deque>
#include <iostream>


using namespace std;
int main()
{

	deque<int> deq;
	for (int i = 0; i < 3; i++)
	{
		deq.push_back(i);
		deq.push_front(10 - i);
	}

	for (int i = 0; i < deq.size(); i++) {
		cout << deq[i] << " ";
	}
	cout << endl;

    for (auto i: deq){
		cout << i << " " << endl;
	}
}