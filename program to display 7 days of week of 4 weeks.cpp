// program to display 7 days of 4 weeks 

#include <iostream>
using namespace std;
int main()
{
	int weeks;
	int days_in_week=7;
	cout<<"Enter number of weeks: ";
	cin>>weeks;
	
	cout<<"***** WEEK DAYS *****"<<endl;
	cout<<"-----------------------"<<endl;
	
	for (int i=1;i<=weeks;i++)
	{
		cout<<"Week: "<<i<<endl;
		cout<<"*******************"<<endl;

		for(int j=1;j<=days_in_week;j++)
		{
			cout<<"  Day:"<<j<<endl;
		}
	cout<<"-------------------"<<endl;
	}
	return 0;
}
