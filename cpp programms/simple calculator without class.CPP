#include<iostream>
using namespace std;
main()
{
	char op;
	float a,b;
	cout<<"enter operator +,-,*,/: ";
	cin>>op;
	
	cout<<"enter operand a:";
	cin>>a;
	cout<<"enter operand b:";
	cin>>b;
	

	switch (op)
	{
		case '+' :
		cout<<a<<"+"<<b<<"="<<a+b;
		break;
		
			case '-' :
		cout<<a<<"-"<<b<<"="<<a-b;
		break;
		
			case '*' :
		cout<<a<<"*"<<b<<"="<<a*b;
		break;
		
			case '/' :
		cout<<a<<"/"<<b<<"="<<a/b;
		break;
		
		default:
		cout<<"error operator is not correct";
		break;
	}
}
