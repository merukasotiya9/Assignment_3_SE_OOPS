/*2. Basic Input/Output
Write a C++ program that accepts user input for their name and age and then
displays a personalized greeting.*/
#include<iostream>
using namespace std;
main()
{
	string name;
	int age;
	cout<<"\n\n\t Enter your name :-";
	cin>>name;
	cout<<"\n\n\t Enter your age :- ";
	cin>>age;
	
	cout<<"\n\n\t Hello "<<name;
	cout<<"\n\n\t your age is :-"<<age;
}