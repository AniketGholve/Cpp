#include<iostream>
#include<stdlib.h>
using namespace std;
class name
{
	public:
	void number()
	{
		cout<<rand()%100+1<<endl;
	}
};
int main()
{
	int ans;
	name o;
	do{
	cout<<"generated number Are ";
	o.number();
	cout<<"Want to continue press 1"<<endl;
	cin>>ans;
	}while(ans==1);

}
