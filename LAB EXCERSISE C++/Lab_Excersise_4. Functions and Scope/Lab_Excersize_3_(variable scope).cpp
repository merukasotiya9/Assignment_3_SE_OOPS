/*3. Variable Scope
Write a program that demonstrates the difference between local and global
variables in C++. Use functions to show scope.*/
#include<iostream>
using namespace std;

void display();

int a=100;					//Global variable declaration

main()
{
	int a=10;					//local variabl
	cout<<"\n\n\t This is a local variable ";
	cout<<a;
	display();
}
void display()
{
	int a=5;
	cout<<"\n\n\t This is a gloabal  Variable ";
	cout<<::a;
}
	

	
