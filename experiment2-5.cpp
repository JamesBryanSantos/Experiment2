#include <iostream>
#include <conio.h>
 using namespace std;
 
int main()
{
   int i, t1 = 0, t2 = 1, next;
   const int n=22;


 	cout<<"==================Fibonacci Sequence=================="<<endl;
 	cout<<"===========by: James Bryan D. Santos (1-13)==========="<<endl;
 	cout<<endl<<endl;
   cout << "Fibonacci Number until 20th term:\n";
 
   for ( i= 0 ; i < n ; i++ )
{
     	 if ( i <= 1 )
         next = i;
      
	 else
{
         next = t1 + t2;
         t1 = t2;
         t2 = next;
 }
      cout << next << ",";
 }
   getch();
   return 0;
}
