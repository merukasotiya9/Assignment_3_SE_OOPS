/*1. Simple Calculator Using Functions
Write a C++ program that defines functions for basic arithmetic operations (add,
subtract, multiply, divide). The main function should call these based on user input.*/
#include<iostream>
using namespace std;
void aritmatic(int , int , int);

void arithmatic(int num1 , int num2 , int choice)
{
	
	switch(choice)
	{
		case 1 :cout<<"\n\n\t Addtion of = "<<num1+num2;
				break;
				
		case 2 :cout<<"\n\n\t sub-traction of = "<<num1-num2;
				break;
				
		case 3 :cout<<"\n\n\t multiplicaton of = "<<num1*num2;
				break;
				
		case 4 :cout<<"\n\n\t division of = "<<num1/num2;
				break;
				
		default :cout<<"\n\n\t Invalid choice !.";
				break;
	}
}
main()
{
	int num1,num2 , choice;
	cout<<"\n\n\t Enter Number One :- ";
	cin>>num1;
	cout<<"\n\n\t Enter Number Second :- ";
	cin>>num2;
	
	cout<<"\n _________ARITHMATIC OPERATION___________________\n";
	
	cout<<"\n\n\t press 1 for Addtion ";
	cout<<"\n\n\t press 2 for sub straction";
	cout<<"\n\n\t press 3 for multiplication";
	cout<<"\n\n\t press 4 for division";
	
	cout<<"\n\n\t Enter Your choice Which operation you perform ?  :- ";
	cin>>choice;
	
	arithmatic(num1 , num2 , choice);
}