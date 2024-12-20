/*2. Matrix Addition
Write a C++ program to perform matrix addition on two 2x2 matrices.*/
#include<iostream>
using namespace std;
main()
{
	int m1[20][20] , m2[20][20] , m3[20][20] , rs , cs , r , c;
	cout<<"\n\n\t Enter Row Size :- ";
	cin>>rs;
	cout<<"\n\n\t Enter column Size :- ";
	cin>>cs;
	
	cout<<"\n__________________MATRIX 1______________________________\n";
	
	for(r=0;r<rs;r++)
	{
		for(c=0;c<cs;c++)
		{
			cout<<"\n\n\t  m1["<<r<<"] ["<<c<<"] =";
			cin>>m1[r][c];
		}
	}
	
	cout<<"\n__________________MATRIX 2______________________________\n";

	for(r=0;r<rs;r++)
	{
		for(c=0;c<cs;c++)
		{
			cout<<"\n\n\t  m2["<<r<<"] ["<<c<<"] =";
			cin>>m2[r][c];
		}
	}

	cout<<"\n__________________MATRIX 1______________________________\n";
	for(r=0;r<rs;r++)
	{
		for(c=0;c<cs;c++)
		{
			cout<<" "<<m1[r][c];
		}
		cout<<"\n";
	}

	cout<<"\n__________________MATRIX 2______________________________\n";

	for(r=0;r<rs;r++)
	{
		for(c=0;c<cs;c++)
		{
			cout<<" "<<m2[r][c];
		}
		cout<<"\n";
	}
	
	for(r=0;r<rs;r++)
	{
		for(c=0;c<cs;c++)
		{
			m3[r][c]=m1[r][c]+m2[r][c];		
		}
	}
	
	cout<<"\n___________________SUM OF MATRIX______________________________\n";

	for(r=0;r<rs;r++)
	{
		for(c=0;c<cs;c++)
		{
			cout<<" "<<m3[r][c];
		}
		cout<<"\n";
	}

}
