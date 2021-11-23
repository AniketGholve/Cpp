#include<iostream>
using namespace std;
class name
{
	public:
	void convert()
	{
		int days,month,extday;
		cout<<"entre the Days : ";
		cin>>days;
		if(days>=30)
		{
			month=days/30;
			extday=days-(month*30);
		}
		cout<< month<<" Month And "<<extday<<" Days"; 	
	}	
};
int main()
{
	name o;
	o.convert();
}
