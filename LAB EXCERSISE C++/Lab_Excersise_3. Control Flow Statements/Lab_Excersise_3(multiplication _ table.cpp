/*3. Multiplication Table
Write a C++ program to display the multiplication table of a given number using a
for loop.*/
#include<iostream>
using namespace std;
main()
{
	int num , i;
	cout<<"\n\n\t Input any Number :- ";
	cin>>num;
	for(i=1;i<=10;i++)
	{
		cout<<"\n  "<<num<<" * "<<i<<" = "<<num*i<<"\n";
	}
}