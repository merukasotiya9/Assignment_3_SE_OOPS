/*3. String Palindrome Check
Write a C++ program to check if a given string is a palindrome (reads the same
forwards and backwards).*/
#include<iostream>
using namespace std;
int palindrome(int n);

main()
{
	int n;
	cout<<"enter the n:";
	cin>>n;		
	
	palindrome(n);
}

int palindrome(int n)
{
	int ans,rem,sum=0;
	
	ans=n;
	
	while(n>0)
	{
		rem=n%10;
		sum=rem+(sum*10);
		n=n/10;
	}
	
	if(ans==sum)
	{
		cout<<"palindrom";
	}
	else
	{
		cout<<"not plidrom";
	}
	
}
