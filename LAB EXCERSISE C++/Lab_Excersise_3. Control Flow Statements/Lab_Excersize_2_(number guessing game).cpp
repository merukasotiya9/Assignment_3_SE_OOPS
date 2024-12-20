/*2.Number Guessing Game
Write a C++ program that asks the user to guess a number between 1 and 100.
The program should provide hints if the guess is too high or too low. Use loops to allow
the user multiple attempts.*/
#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;
main()
{
	int num , i , random ;
	srand(time(0));
	random=rand()%10;
	
	for(i=0;i<=5;i++)
	{
		cout<<"\n\n\t Guess Any Number :- ";
		cin>>num;
	
		if(num>random)
		{
			cout<<"\n\n\t Guess Number is high.";
		}
		else if(num<random)
		{
			cout<<"\n\n\t Guess Number is Small.";
		}
		else if(num==random)
		{
			cout<<"\n\n\t congratulation you are Win.";
			break;
		}
	}
		if(i==5)
		{
			cout<<"\n\n\t try Next time.";
		}
}