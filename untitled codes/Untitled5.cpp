#include<iostream>
using namespace std;

class array
{
int a[10]={1,2,3,4,5,6,7,8,9,10};
public:
	void forward_arr()
	{
		for(int i=0;i<=9;i++)
		{
			cout<<a[i]<<" ";	
		}
	cout<<endl;
	}
	void backward_arr()
	{
		for(int i=9;i>=0;i--)
		{
			cout<<a[i]<<" ";	
		}
	}
};
int main()
{
	array o;
	o.forward_arr();
	o.backward_arr();
}
