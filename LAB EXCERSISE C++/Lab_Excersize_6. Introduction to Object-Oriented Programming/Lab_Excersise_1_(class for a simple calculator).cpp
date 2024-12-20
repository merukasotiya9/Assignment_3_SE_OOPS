/*1. Class for a Simple Calculator
Write a C++ program that defines a class Calculator with functions for addition,
subtraction, multiplication, and division. Create objects to use these functions.*/
#include<iostream>
using namespace std;

class Calculator
{
	private:
		int num1 , num2;
	public:
		void get_data();
		void Addition();
		void Subtraction();
		void Multiplication();
		void Division();
};

void Calculator::get_data()
{
	cout<<"\n\n\t Enter First Number :- ";
	cin>>num1;
	cout<<"\n\n\t Enter Second Number :-  ";
	cin>>num2;
}
void Calculator::Addition()
{
	cout<<"  "<<num1+num2;
}
void Calculator::Subtraction()
{
	cout<<"   "<<num1-num2;
}
void Calculator::Multiplication()
{
	cout<<"   "<<num1*num2;
}
void Calculator::Division()
{
	cout<<"  "<<num1/num2;
}

main()
{
	Calculator C;
	C.get_data();
	
	cout<<"\n--------------------------Operation----------------------\n";
	cout<<"\n\n\t Press 1 for Addition :- ";
	cout<<"\n\n\t Press 2 for substraction :-  ";
	cout<<"\n\n\t Press 3 for multiplication :- ";
	cout<<"\n\n\t Press 4 for division :- ";
	cout<<"\n--------------------------Operation----------------------\n";
	
	int choice;
	cout<<"\n\n\t Enter Your Choice Which Operation you perform :- ";
	cin>>choice;
	
	switch(choice)
	{
		case 1:cout<<"Addtion of = ";
				C.Addition();
				break;
		case 2:cout<<"Subtraction of = ";
				C.Subtraction();
				break;
		case 3:cout<<"Multiplication of = ";
				C.Multiplication();
				break;
		case 4:cout<<"Addtion of = ";
				C.Division();
				break;
		default:cout<<"Invalid Choice !";
				break;

	}
}