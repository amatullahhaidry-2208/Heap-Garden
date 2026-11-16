#include <iostream>
using namespace std;
int main()
{
	int phy;
	int mechanical;
	int maths;
	int computer;
	int civil;
	string name;
	string branch;
	int semester;
	int studentId;
	int year;
	cout<<"***** CGPA AND DIVISION PROGRAM!! *****"<<endl;
	cout<<"***********************************************"<<endl;
	cout<<"Enter student name: "<<endl;
	cin>>name;
	cout<<"Enter student branch: "<<endl;
	cin>>branch;
	cout<<"Enter semester: "<<endl;
	cin>>semester;
	cout<<"Enter student Id: "<<endl;
	cin>>studentId;
	cout<<"Enter year of exam: "<<endl;
	cin>>year;
	cout<<"***********************************************"<<endl;
	cout<<"Enter marks of engineering physics:  "<<endl;
	cin>>phy;
	cout<<"-----------------------------------------------"<<endl;
	cout<<"Enter marks of basic mechanical engineering:  "<<endl;
	cin>>mechanical;
	cout<<"-----------------------------------------------"<<endl;
	cout<<"Enter marks of engineering mathematics:  "<<endl;
	cin>>maths;
	cout<<"-----------------------------------------------"<<endl;
	cout<<"Enter marks of basic computer engineering:  "<<endl;
	cin>>computer;
	cout<<"-----------------------------------------------"<<endl;
	cout<<"Enter marks of basic civil engineering and mechanics:  "<<endl;
	cin>>civil;
	cout<<"-----------------------------------------------"<<endl;
	
	cout<<"----- STUDENT ACADEMIC REPORT CARD -----"<<endl;
	cout<<"        *****     "<<endl;
	cout<<"Name of the student:  "<<name<<"."<<endl;
	cout<<"Banch: "<<branch<<endl;
	cout<<"Semester: "<<semester<<endl;
	cout<<"Student Id: "<<studentId<<endl;
	cout<<"Year: "<<year<<endl;
	cout<<"-----------------------------------------------"<<endl;
	
	float per=(phy+mechanical+maths+computer+civil)/5;
	cout<<"Your semester 1 percentage is: "<<per<<"%"<<endl;
	
	float cgpa=per/9.5;
	cout<<"Your semester 1 cgpa is: "<<cgpa<<"."<<endl;
	
	if (per>=91)
	{
		cout<<"Your grade point is 10."<<endl;
		cout<<"Performance is outsanding."<<endl;
		cout<<"Your grade is A+."<<endl;
	}
	else if (per=90 || per>=81)
	{
		cout<<"Your grade point is 9."<<endl;
		cout<<"Performance is excellent."<<endl;
		cout<<"Your grade is A."<<endl;
	}
	else if (per=80 || per>=71)
	{
		cout<<"Your grade point is 8."<<endl;
		cout<<"Performance is very good."<<endl;
		cout<<"Your grade is B+."<<endl;
	}
	else if (per=70 || per>=61)
	{
		cout<<"Your grade point is 7."<<endl;
		cout<<"Performance is good."<<endl;
		cout<<"Your grade is B."<<endl;
	}
	else if (per=60 || per>=51)
	{
		cout<<"Your grade point is 6."<<endl;
		cout<<"Performance is average"<<endl;
		cout<<"Your grade is C+."<<endl;
	}
	else if (per=50 || per>=41)
	{
		cout<<"Your grade point is 5."<<endl;
		cout<<"Performance is satisfactory."<<endl;
		cout<<"Your grade is C."<<endl;
	}
	else if (per=40 || per>=31)
	{
		cout<<"Your grade point is 4."<<endl;
		cout<<"Performance is marginal."<<endl;
		cout<<"Your grade is D."<<endl;
	}
	else
	{
		cout<<"Your grade point is 0."<<endl;
		cout<<"FAILED."<<endl;
		cout<<"Your grade is F."<<endl;
	}
	
	if (cgpa>=7.5)
	{
		cout<<"First Division with Honors"<<endl;
	}
	else if (6.5<=cgpa<7.5)
	{
		cout<<"First Division"<<endl;
	}
	else if (5.0<=cgpa<6.5)
	{
		cout<<"Second Division"<<endl;
	}
	else
	{
		cout<<"You have failed."<<endl;
	}
	
	return 0;
	
}
