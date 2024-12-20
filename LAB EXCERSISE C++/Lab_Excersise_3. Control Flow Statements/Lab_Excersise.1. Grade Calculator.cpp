/*1. Grade Calculator
Write a C++ program that takes a student’s marks as input and calculates the grade
based on if-else conditions.
Objective: Practice conditional statements (if-else).*/
#include<iostream>
using namespace std;
main()
{
	int mark[3] ;
	float per , total=0;
	for(int i=0;i<3;i++)
	{
		cout<<"\n\n\t Enter student mark ["<<i+1<<"]:";
		cin>>mark[i];
	}
	
	for(int i=0;i<3;i++)
	{
		cout<<"\n\n\t student mark ["<<i+1<<"]:"<<mark[i];
		total=total+mark[i];
		per=total/3;
	}
	cout<<"\n\n\t total of mark :- "<<total;
	cout<<"\n\n\t percentage :- "<<per;
	
	cout<<"\n--------------Student Grade--------------------------------\n";
	
	if(per>90)
	{
		cout<<"\n Grade A";
	}
	else if(per>70 && per<90)
	{
		cout<<"\n Grade B";
	}
	else if(per>50 && per<70)
	{
		cout<<"\n Grade C";
	}
	else if(per>33 && per<50)
	{
		cout<<"\n Grade D";
	}
	else
	{
		cout<<"\n Failed !";
	}
	
}
