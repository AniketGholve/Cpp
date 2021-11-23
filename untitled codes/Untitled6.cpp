#include<iostream>
using namespace std;
class array
{
	int a;
	int arr[10];
	public:	
	void input()
	{
		cin>>a;			
		while(a>0)
		{
			int i;
			i=a%10;
			if(arr[i]==1)
			{
				break;
			}
			else
			{
				arr[i]=1;
				a=a/10;
			}
		}
		if(a>0)
		{
			cout<<"yes"<<endl;
		}
		else
		{
			cout<<"no"<<endl;
		}
		
	}
};
int main()
{
	array o;
	o.input();
}
