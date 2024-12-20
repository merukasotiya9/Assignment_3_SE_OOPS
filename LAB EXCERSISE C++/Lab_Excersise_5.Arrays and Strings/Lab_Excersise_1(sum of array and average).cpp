/*1. Array Sum and Average 
Write a C++ program that accepts an array of integers, calculates the sum and average, and displays the results. */
#include<iostream>
using namespace std;
main()
{
	int arr[20] ,  size ;
	float avg , sum;
	cout<<"\n\n\t Enter the Size of Array :- ";
	cin>>size;
	for(int i=0;i<size;i++)
	{
		cout<<"\n\n\t Enter the element  ["<<i+1<<"] : " ;
		cin>>arr[i];
	}
		for(int i=0;i<size;i++)
	{
		cout<<"\n\n\t Enter the element  ["<<i+1<<"] : "<<arr[i];
		sum=sum+arr[i];
		avg=sum/size;
	}
	cout<<"\n\n\t sum of array :- "<<sum;
	cout<<"\n\n\t avereg of array:- "<<avg;

}