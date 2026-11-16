// to make trianle in ascensing order using *
// output : *
//          **
//          ***
//          ****
//          *****

#include <iostream>
using namespace std;
int main()
{
	int rows;
	cin>>rows;
	for(int a=1;a<=rows;++a)
	{
		for(int b=1;b<=a;b++)
		{
			cout<<"*";
		}
		cout<<endl;
	
	}
	return 0;
}

