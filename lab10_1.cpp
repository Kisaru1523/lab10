// cout << "Press Enter 3 times to reveal your future.";
// cout << "You will get A in this 261102.";
#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
	srand(time(0));
	cout << "Press Enter 3 times to reveal your future.";
	cin.get();
	cin.get();
	cin.get();
	string x[]={"A","B+","B","C+","C","D+","D","F","W"};
	int y=rand()%9;
	cout << "You will get "<<x[y]<<" in this 261102.";
	return 0;
}
