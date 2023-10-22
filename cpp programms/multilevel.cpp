#include<iostream>
using namespace std;
class grandfather 
{
	public:
		void business()
		{
			cout<<"multinational company";
			
		}
};
class father : public grandfather
{
	public:
		void house()
		{
			cout<<"\nbanglow";
			
		}
};
class son : public father
{
	public :
		void car()
		{
			cout<<"\nbugatti car";
			
		}
	
};
main()
{
	son o;
	o.business();
	o.house();
	o.car();
	
}

