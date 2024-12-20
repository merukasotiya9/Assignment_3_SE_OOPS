/*1. Variables and Constants
Write a C++ program that demonstrates the use of variables and constants. Create
variables of different data types and perform operations on them*/
#include<iostream>
using namespace std;
main()
{
	int a=10;
	float b=25.5;
	char c='M';
	string sname="babu";
	
	cout<<"\n\n\t integer datatype :- "<<a;
	cout<<"\n\n\t float datatype :- "<<b;
	cout<<"\n\n\t character :- "<<c;
	cout<<"\n\n\t string datatype :- "<<sname;
}
	// using to constants
	 
#include<iostream>
using namespace std;
main()
{
	const int x=10;				//only accepted one value
		float y=25.5;
		char name='M';
		string sname="babu";
	
	cout<<"\n\n\t integer datatype :- "<<x;
	cout<<"\n\n\t float datatype :- "<<y;
	cout<<"\n\n\t character :- "<<name;
	cout<<"\n\n\t string datatype :- "<<sname;

	a=20;					// not accepted this value
	cout<<"\n\n\t  integer datatype :-"<<a;
	
}