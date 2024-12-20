/*2. Class for Bank Account 
Create a class BankAccount with data members like balance and member functions like deposit and withdraw. 
Implement encapsulation by keeping the data members private.*/
#include<iostream>
using namespace std;
class Bank_Account
{
	private:
			int  amount ,  withdrow , deposite , total;
		
	public:
		void get_balance();
		void get_deposit();
		void get_withdraw();
};
		void Bank_Account::get_balance()
		{
			cout<<"\n\n\t Enter Your Available Balance :- ";
			cin>>amount;
		}
		void Bank_Account::get_deposit()
		{
			cout<<"\n\n\t Enter your Deposite Amout :- ";
			cin>>deposite;
			cout<<"\n\n\t your Currently balance in your Account :- "<<amount;
			total=amount+deposite;
			cout<<"\n\n\t total amount of Your bank account :- "<<total;
		}
		void Bank_Account::get_withdraw()
		{
			cout<<"\n\n\t your Currently balance in your Account :- "<<amount;
			cout<<"\n\n\t Enter Your Withdraw Amount :- ";
			cin>>withdrow;
			
			if(withdrow<=2000)
			{
				cout<<"\n\n\t You can't Withdraw amount !";
			}
			else
			{
				total=amount-withdrow;
				cout<<"\n\n\t Total Amount of your bank account   "<<total;
			}
}

main()
{
	Bank_Account BA;
	BA.get_balance();
	
	int choice;
	
	cout<<"\n----------------------select option ----------------------------\n";
	cout<<"\n\n\t Press 1 for deposite your amount ";
	cout<<"\n\n\t Press 2 for Withdraw your amount ";
	
	cout<<"\n\n\t Enter Your Choice Which Operation you perform :- ";
	cin>>choice;
	
	
	switch(choice)
	{
		case 1 :
					BA.get_deposit();
					break;
					
		case 2 : 
					BA.get_withdraw();
					break;
		
		default : cout<<"Invalid choice !";
	}
}