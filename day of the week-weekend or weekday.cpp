#include <iostream>
using namespace std;
int main()
{
	int day;
	cout<<"Enter the number (1-7): ";
	cin>>day;
	
	cout<<"SPECIFIC CALENDAR DAY!"<<endl;
	switch(day)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
			cout<<"WEEKDAY"<<endl;
			break;
		case 6:
		case 7:
			cout<<"WEEKEND"<<endl;
			break;
		default:
			cout<<"Invalid Input"<<endl;
	}
	return 0;
}
