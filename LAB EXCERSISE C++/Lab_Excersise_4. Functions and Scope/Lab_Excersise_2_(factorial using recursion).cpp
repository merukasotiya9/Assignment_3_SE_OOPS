/*2. Factorial Calculation Using Recursion
Write a C++ program that calculates the factorial of a number using recursion.*/
#include<iostream>
using namespace std;
int factorial(int);

main()
{
	int num , fact;
	cout<<"\n\n\t Input Any Number from factorial :- ";
	cin>>num;
	
	fact=factorial(num);
	cout<<"\n\n\t factorial of "<<num<<" = "<<fact;
}
int factorial(int num)
{

	if(num==0)
	{
		return 1;
	}
	else
	{
		return num*(factorial(num-1));
	}
	
}

