#include<iostream>
using namespace std;
class calculator 
{

	public:
		calculator(int a , int b)  // parameterized constructor 
		{
			cout<<"\n a = "<<a;
			cout<<"\n b = "<<b;
			cout<<"\n a and b ="<<(a+b);
			cout<<"\n a and b ="<<(a-b);
			cout<<"\n a and b ="<<(a*b);
			cout<<"\n a and b ="<<(a/b);
			
		}
};
main()
{
	int a,b;
	calculator(50,2);
	
}
