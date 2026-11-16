// electricity bill
// attributes required : no. of units ; cost of one unit for items like refrigertor , television , ac etc ;

#include <iostream>
using namespace std;
int main()
{
    cout <<"-*-*-*-*-*-* ELECTRICITY BILL -*-*-*-*-*-*"<<endl;
    cout<<"-----------------------------------------------------"<<endl;
    string appliance;
    int units;
    cout<<"Name of the appliance: "<<endl;
    cin>>appliance;
    cout<<"Enter number of units: "<<endl;
    cin>>units;
    float totalAmount;
    
    if (appliance == "television" )
        if (units <=8)
        {
          int cost = units*7;
          cout<<cost<<" is the cost of units less than or equal to 8."<<endl;
        }
       else if (units>8 && units<=15)
       {
         int newCost = units*10;
         cout<<newCost<<" is the cost of units greater than 8 and upto 15."
            <<endl;
       }
      else 
      {
        int etCost = units*15;
        cout<<etCost<<" is the cost of units greater 15."<<endl;
      }
    else if (appliance == "Refrigerator")
        if (units <=15)
        {
          int cost = units*7;
         cout<<cost<<" is the cost of units less than or equal to 8."<<endl;
        }
       else if (units>15 && units<=30)
       {
         int newCost = units*10;
         cout<<newCost<<" is the cost of units greater than 8 and upto 15."
            <<endl;
       }
      else 
      {
        int etCost = units*15;
        cout<<etCost<<" is the cost of units greater 15."<<endl;
      }
        
    else if (appliance == "Wifi Router")
        if (units <=5)
        {
         int cost = units*7;
         cout<<cost<<" is the cost of units less than or equal to 8."<<endl;
        }
       else if (units>5 && units<=14)
       {
         int newCost = units*10;
         cout<<newCost<<" is the cost of units greater than 8 and upto 15."
            <<endl;
       }
      else 
      {
        int etCost = units*15;
        cout<<etCost<<" is the cost of units greater 15."<<endl;
      }
    else if (appliance == "Fan")
        if (units <=10)
        {
          int cost = units*7;
          cout<<cost<<" is the cost of units less than or equal to 8."<<endl;
        }
       else if (units>10 && units<=25)
       {
         int newCost = units*10;
         cout<<newCost<<" is the cost of units greater than 8 and upto 15."
            <<endl;
       }
       else 
       {
        int etCost = units*15;
        cout<<etCost<<" is the cost of units greater 15."<<endl;
       }
    else 
         if (units <=15)
        {
          int cost = units*7;
          cout<<cost<<" is the cost of units less than or equal to 8."<<endl;
        }
       else if (units>15 && units<=40)
       {
         int newCost = units*10;
         cout<<newCost<<" is the cost of units greater than 8 and upto 15."
            <<endl;
       }
       else 
       {
        int etCost = units*15;
        cout<<etCost<<" is the cost of units greater 15."<<endl;
       }
    
    return 0;
    
}
