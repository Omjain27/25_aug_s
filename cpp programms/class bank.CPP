#include<iostream>
#include<string.h>
using namespace std;
class hdfcbank
{
	public:
	int acc;  // data member 
	float assign,deposit,withdraw,balance;
	string name;
	string type ;
	void inputdata() // member function 
	{
		cout<<"\nenter the name of depositor:"<<"\n";
		cin>>name;
		cout<<"enter account number:"<<"\n";
		cin>>acc;
		cout<<"enter the account type "<<"\n";
		cin>>type;
		cout<<"enter the balance amount in the account"<<"\n";
		cin>>balance;
		
		
		
		
	}
	void displaydata()
	{
		cout<<"\nacc ="<<acc;
		cout<<"\nname="<<name;
		cout<<"\ntype="<<type;
		cout<<"\nbalance amount\n"<<balance;
	}
	void inputdata2()
	{
		cout<<"\nenter the assign value"<<"\n";
		cin>>assign;
		cout<<"\nenter the deposit ammount"<<"\n";
		cin>>deposit;
		cout<<"\nenter the withdraw an amount"<<"\n";
		cin>>withdraw;
		
	}
	void display2()
	{
		cout<<"\nname = "<<name;
		balance=balance+deposit-withdraw;
		cout<<"\nbalance = "<<balance;
		
	}
	};
	main()
	{
	hdfcbank b;
	b.inputdata();
	b.displaydata();
	b.inputdata2();
	b.display2();
}

