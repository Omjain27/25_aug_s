#include<iostream>
using namespace std;
class student
{
	public:
	int rollnumber;
	void inputdata()
	{
		cout<<"\nenter the roll number";
		cin>>rollnumber;
	}
	void displaydata()
	{
		cout<<"\nrollnumber = "<<rollnumber;	
	}
};
class test : public student
{
	public:
	float sub1,sub2;
	void inputdata1()
	{
		cout<<"\nenter the marks of first subject";
		cin>>sub1;
		cout<<"\nenter the marks of second subject";
		cin>>sub2;
	}
	void displaydata1()
	{
		cout<<"\nsubject 1st marks = "<<sub1;
		cout<<"\nsubject 2nd marks = "<<sub2;
	}
};
class result : public test 
{
	public:
		float total;
		void displaydata2()
		{
			total=sub1+sub2;
			cout<<"\nresult = "<<result;
		}
};
	

main()
{
 	result r;
 	r.inputdata()
 	r.displaydata()
 	r.inputdata1()
 	r.displaydata1()
 	r.displaydata2()
 	
 	
}

