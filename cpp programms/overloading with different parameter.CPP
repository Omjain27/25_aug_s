#include<iostream>
using namespace std;
class calculator
{
	public :
		void addition(int a,int b)
		{
			cout<<a+b<<endl;
		
		}
			void subcraction(float a,float b)
		{
			cout<<a-b<<endl;
		
		}
			void multiplaction(float a,float b)
		{
			cout<<a*b<<endl;
		
		}
			void division(int a,int b)
		{
			cout<<a/b<<endl;
		
		}
		
};
main()
{
	calculator c;
	c.addition(2,2);
	c.subcraction(2.2,3.3);
	c.multiplaction(9.9,9.9);
	c.division(50,2);
}
