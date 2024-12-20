/*3.Operator Demonstration
Write a C++ program that demonstrates arithmetic, relational, logical, and bitwise
operators. Perform operations using each type of operator and display the results*/
#include<iostream>
using namespace std;
main()
{
	int num1 , num2 ;
	cout<<"\n\n\t Enter your First number :- ";
	cin>>num1;
	cout<<"\n\n\t Enter your second number :- ";
	cin>>num2;
	
	//arithmetic operator 
	cout<<"\n\n\t Addition operator :- "<<num1+num2;
	cout<<"\n\n\t Sub-straction operator :- "<<num1-num2;
	cout<<"\n\n\t Multiplication operator :- "<<num1*num2;
	cout<<"\n\n\t division operator :- "<<num1/num2;
	cout<<"\n\n\t Module operator :- "<<num1%num2;
	
	 // Relational Operators (==, !=, <, >, <=, >=) 
	cout<<"\n\n\t equal to :- "<<(num1==num2);
	cout<<"\n\n\t not equal to :- "<<(num1!=num2);
	cout<<"\n\n\t less than :- "<<(num1<num2);
	cout<<"\n\n\t greater than :- "<<(num1>num2);
	cout<<"\n\n\t less than equal to :- "<<(num1<=num2);
	cout<<"\n\n\t greater than equal to :- "<<(num1>=num2);
	
	 // Logical Operators (&&, ||, !)
	 cout<<"\n\n\t AND operator :- ";
	 if(num1==num2 && num2==num1)
	 {
	 	cout<<"\n\n\t number equal.";
	 }
	 else
	 {
	 	cout<<"\n\n\t number is not equal.";
	 }
	 cout<<"\n\n\t OR operator :- ";
	 int num3;
	 if(num1==num2 || num2==num3 || num3==num1)
	{
	 	cout<<"\n\n\t number is same. ";
	}
	else
	{
		cout<<"\n\n\t number is different. ";
	}
	cout<<"\n\n\t ! not operator :- ";
	 if (!(num1=num2))
	 {
	 	cout<<"\n\n\t differnt.";
	 }
	 else
	 {
	 	cout<<"\n\n\t same";
	 }
	
}