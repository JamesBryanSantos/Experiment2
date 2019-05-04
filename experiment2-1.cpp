#include <iostream>
#include <string>
#include <conio.h>
using namespace std;
int main() {
 
 float time;
 float price;
 string package;
 cout<<"====================== Internet Subscription Packages ========================="<<endl;
 cout<<"===================== by: James Bryan D. Santos (1-13) ========================="<<endl;
 cout << "Choose package(A,B,C): ";
 cin >> package;
 
 if ((package == "A") ||(package == "a")|| (package == "B") ||(package == "b")||(package == "c")|| (package == "C")) {
 cout << "The number of hours: ";
 cin >> time;
 
 if (time <= 744) {
 	

if ((package == "A") ||(package == "a")) {
if (time > 10)
 {
price = 995 + (time - 10) * 20;
} 
else 
{
price = 995;
}
} 


else if ((package == "B") ||(package == "b"))
{
if (time > 20) 
{
price = 1495 + (time - 20) * 10;
}
 else 
 {
price = 1495;
}
}
 else 
 {
price = 1995;
}
 } else {
cout << "Invalid number of hours!";
 }
 } else {
 cout << "Invalid package!";
}
cout << "Price: " << price << " Pesos";
return 0;
getch();
}
