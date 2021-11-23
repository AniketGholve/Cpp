#include<iostream>
#include<stdlib.h>
using namespace std;
class conv
{
	protected:
		float val1,val2;
	public:
		float get_ini()
		{
			return val1;
		}
		float get_conv()
		{
			return val2;
		}
		virtual void compute()=0;		
};
class m_to_cm:public conv
{
	public:
		
		void compute()
		{
			cout<<"enter the value";
		cin>>val1;
			val2=val1*100;
		}
};
class c_to_k:public conv
{
	public:
		void compute()
		{
			cout<<"enter the value";
		cin>>val1;
		
			val2=val1+273;
		}
};
int main()
{
	m_to_cm c;
	c_to_k k;
	conv *ptr;
	

	int ch;
	cout<<"what do you wnat to convert :\n1:meter to centimeter\n2:celsius to kelvin\n";
	cin>>ch;
	switch(ch)
	{
		case 1:ptr=&c;	
				ptr->compute();				
		        cout<<ptr->get_conv();
				break;
		case 2:	ptr=&k;	
				ptr->compute();
				cout<<ptr->get_conv();
				break;			 
	}
	return 0;
}
