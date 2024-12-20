/*4. Nested Control Structures
Write a program that prints a right-angled triangle using stars (*) with a nested loop.*/
#include<iostream>
using namespace std;
main()
{
	int r , c ;
	for(r=0;r<5;r++)
	{
		for(c=0;c<=r;c++)
		{
			cout<<" *";
		}
		cout<<"\n";
	}
	
}