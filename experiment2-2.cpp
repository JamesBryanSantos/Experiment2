#include <iostream>
#include <conio.h>
#include <iomanip>
#include <cmath>
using namespace std;
int main ()

 {
    
  int demand=35;             
  int surcharge=20;         
 
  const double consumptionprice=1.10;
  double previous, current, gallons, bill;        

  char unpaid_balance;        
  
  cout<<"===========================WATER BILL CALCULATION================================"<<endl;
  cout<<"======================by: James Bryan D. Santos (1-13)==========================="<<endl;
  cout<<endl;

  cout<<"Please Enter Previous Meter Reading(In Gallons): ";
  cin>>previous;     

  cout<<"Please Enter Current Meter Reading(In Gallons): ";
  cin>>current;       

  cout<<"Did Customer Paid The Previous Bill? (Press 'Y' or 'N'): ";
  cin>>unpaid_balance;        

  gallons=current-previous;

  if ((unpaid_balance== 'Y')||(unpaid_balance== 'y'))       
  {
   bill=(consumptionprice*gallons)+demand;
  }
  else
  {
   bill=(consumptionprice*gallons)+demand+surcharge; 
  }
  cout<< setprecision(2)<<fixed;
  cout<<"Your Water Bill = "<<bill<<" Pesos"<<endl;    
  
 
return 0;
getch ();
}
