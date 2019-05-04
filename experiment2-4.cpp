#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main()

{
	int i, counter;
	
	counter= 1;
	
	cout<<"========================Counter======================="<<endl;
 	cout<<"===========by: James Bryan D. Santos (1-13)==========="<<endl;
 	cout<<endl<<endl;
	cout<<"Counting..."<<endl;
	for (i=1;i<=10;i++)
{
		cout<<counter <<",";
		counter ++;
}
	
	for (counter=12;counter<=30;)
{
		cout<<counter<<",";
		counter +=2;
}
	
	getch();
	return 0;
}
