#include<iostream>
#include<stdlib.h>
using namespace std;
class name
{
	public:
	void number()
	{
		char arr[2]={'r','g'};
		int count=rand()%2;
		/*cout<<rand()%100+1<<" ";
		cout<<rand()%100+1<<" ";
		cout<<rand()%100+1<<" ";
		cout<<rand()%100+1*/
		if(count==1)
		{
			cout<<"red"<<endl;
		}
		else
		{
			cout<<"green"<<endl;
		}
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
