#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    cout<<"==================Sum of the numbers=================="<<endl;
 	cout<<"===========by: James Bryan D. Santos (1-13)==========="<<endl;
 	cout<<endl<<endl;
	int i, num, sum = 0;

    cout << "Enter a positive integer: ";
    cin >> num;

    for (int i = 1; i <= num; ++i)
{
        sum += i;
}

    cout << "The sum of all whole numbers from 1 to " << num << " is "<< sum;
    getch();
    return 0;
}

