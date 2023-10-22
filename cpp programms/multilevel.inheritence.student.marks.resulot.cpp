#include<iostream>
using namespace std;
class student
{
	float mark1,mark2;
	public:
		void rollnumber()
		{
			cout<<"29\n";
		}	
		void subject()
		{
			cout<<"maths\n";
			cout<<"flutter\n";
			}	
};
class marks  : public student
{
	public:
		void mark1()
		{
			cout<<"80";
		}
		void mark2()
		{
			cout<<"99";
		}
};
class result : public marks
{
	public:
		void Result()
		{
			resulT=mark1+mark2;
			cout<<" total = %f "<<resulT;
		}
};
main()
{
	result r;
	
	r.Result();
}
