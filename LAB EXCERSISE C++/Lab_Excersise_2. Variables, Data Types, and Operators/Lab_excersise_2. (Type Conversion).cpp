/*2. Type Conversion
Write a C++ program that performs both implicit and explicit type conversions and
prints the results.*/
#include<iostream>
using namespace std;
main()
{
	//implicit type casting
	int a=12 , c;
	float b=12.5 ;
	c=a+b;
	cout<<"\n\n\t sum of a+b = "<<c;
	
	
	//explicit type casting
	int x=12 ;
	float y=12.5,c ;
	c=(float)x+y;
	cout<<"\n\n\t sum of x+y = "<<c;
}