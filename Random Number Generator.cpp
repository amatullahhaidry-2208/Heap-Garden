// RANDOM NUMBER GENERATOR 
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
	int x;

	srand(time(0));
	cout<<"give a number between 0-100 for the range of random number generator: ";
	cin>>x;
	
	int num = (rand() % x) +1;
	cout<<num;
	return 0;
	
}
