/*3. POP vs. OOP Comparison Program
Write two small programs: one using Procedural Programming (POP) to calculate the
area of a rectangle, and another using Object-Oriented Programming (OOP) with a
class and object for the same task.*/
//#include<stdio.h>
//main()
//{
//	int length , width , rectangle;
//	
//	printf("\n\n\t Enter your length :- ");		//using Procedural Programming (POP) 
//	scanf("%d",&length);
//	printf("\n\n\t Enter your width :- ");
//	scanf("%d",&width);
//	
//	rectangle=length*width;
//	printf("\n\n\t area of rectangle :- %d",rectangle);
//}

//using Object-Oriented Programming (OOP)

#include<iostream>
using namespace std;
class Area_rec
{
	private:
		int length;
		int width;
		int rectangle;
		
	public:
		void get_Area_rec()
		{
			cout<<"\n\n\t Enter your length :- ";
			cin>>length;
			cout<<"\n\n\t Enter your width :- ";
			cin>>width;
		}
		void print_Area_rec()
		{
			rectangle=length*width;
			cout<<"\n\n\t area of rectangle :- "<<rectangle;
		}
};

main()
{
	Area_rec A;
	A.get_Area_rec();
	A.print_Area_rec();
}

