#include <iostream>
using namespace std;
int main()
{
	string light;
	cout<<"Enter a traffic signal colour (r,g,y): ";
	cin>>light;
	
	switch(light[0])
	{
		case 'R':
		case 'r':
			cout<<"\nStop the car behind the zebra crossing.\nWait for the signal to turn green."<<endl;
			return 0;
		case 'G':
		case 'g':
			cout<<"\nYou can move forward when the road is clear."<<endl;
			break;
		case 'Y':
		case 'y':
			cout<<"\nSlow down and prepare to stop."<<endl;
			break;
		default:
			cout<<"Unknown colour."<<endl;
	}
	return 0;
}
