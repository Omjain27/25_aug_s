#include<iostream>
using namespace std;
class person
{
	public :
		void name()
		{
			cout<<"name = om\n";
			
		}
		void age()
		{
			cout<<"age = 18\n";
		}
	
};
class student 
{
	public: 
	void percentage()
	{
		cout<<"percentage = 100%\n";
		
	}
};
class teacher : public person , public student 
{
	public: 
	void salary()
	{
		cout<<"salary = 9999999999999999999\n";
		
	}
};
main()
{
	person p;
	student s;
	teacher t;
	
	p.name();
	p.age();
	
	s.percentage();
	
	t.salary();
}
