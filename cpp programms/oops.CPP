#include<iostream>
using namespace std;
class person
{
	int age;
	string name;
	string address;
	
	public:
		void input()
		{
			cout<<"enter age";
			cin>>age;
			cout<<"enter name";
			cin>>name;
			cout<<"enter address";
			cin>>address;
			
		}
		void show()
		{
			cout<<"age"<<endl;
			cout<<"name"<<endl;
			cout<<"address"<<endl;
		}
};
main()
{
	person om,abhishek,jay;
	
	om.input();
	om.show();
	abhishek.input();
	abhishek.show();
	jay.input();
jay.show();}
