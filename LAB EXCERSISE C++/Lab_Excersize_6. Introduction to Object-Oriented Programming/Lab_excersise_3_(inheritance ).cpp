/*3. Inheritance Example
Write a program that implements inheritance using a base class Person and derived
classes Student and Teacher. Demonstrate reusability through inheritance.*/
#include<iostream>
using namespace std;
class person
{
	protected:
		string s_name;
		string t_name;
	public:
		void get_data()
		{
			cout<<"\n\n\t Enter Student name :- ";
			cin>>s_name;
		}
		void get_t()
		{
			cout<<"\n\n\t Enter Teacher name :- ";
			cin>>t_name;
		}
};
class student : public person
{
	protected:
		int s_id;
		int s_age;
		string s_city;
	public:
		void get1()
		{
			cout<<"\n\n\t Enter student id :- ";
			cin>>s_id;
			cout<<"\n\n\t Enter Student age :- ";
			cin>>s_age;
			cout<<"\n\n\t Enter Student city :- ";
			cin>>s_city;
		}
		void print()
		{
			cout<<"\n___________________Student info_____________________\n";
			cout<<"\n\n\t Student name :- "<<s_name;
			cout<<"\n\n\t Student id :- "<<s_id;
			cout<<"\n\n\t Student age :- "<<s_age;
			cout<<"\n\n\t Student city :- "<<s_city;
		}
};
class teacher : public person 
{
	protected:
		int t_id;
		int t_salary;
		string t_dep;
	public:
		void get2()
		{
			cout<<"\n\n\t Enter Teacher id :- ";
			cin>>t_id;
			cout<<"\n\n\t Enter Teacher salary :- ";
			cin>>t_salary;
			cout<<"\n\n\t Enter Teacher Departmnet :-  ";
			cin>>t_dep;	
		}	
		void print_data()
		{
			cout<<"\n___________________Teacher info_____________________\n";
			cout<<"\n\n\t Teacher name :- "<<t_name;
			cout<<"\n\n\t Teacher id :- "<<t_id;
			cout<<"\n\n\t Teacher salary :- "<<t_salary;
			cout<<"\n\n\t Teacher department :- "<<t_dep;
		}
};
main()
{
	student s;
	teacher t;
	s.get_data();
	s.get1();
	t.get_t();
	t.get2();
	s.print();
	t.print_data();
}