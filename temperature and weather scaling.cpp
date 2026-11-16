#include <iostream>
using namespace std;
int main()
{
	float temperature;
	bool isSunny=true;
	cout<<"Enter temperature: "<<endl;
	cin>>temperature;

	if(temperature>=40 && isSunny)
	{
		cout<<"It is hot outside"<<endl;
		cout<<"It is sunny."<<endl;
	}
	else if(25<=temperature<40 && isSunny)
	{
		cout<<"It is humid outside"<<endl;
		cout<<"It is sunny."<<endl;
	}
	else if(10<=temperature<25 && isSunny)
	{
		cout<<"It is warm outside"<<endl;
		cout<<"It is sunny."<<endl;
	}
	else if(0<=temperature<10 && isSunny)
	{
		cout<<"It is cold outside"<<endl;
		cout<<"It is sunny."<<endl;
	}
	else
	{
		cout<<"Its either too cold or too hot."<<endl;
	}
	
	return 0;
	
}

