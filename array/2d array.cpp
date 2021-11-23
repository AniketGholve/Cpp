#include<iostream>
using namespace std;
class d2_array
{
int arr[5][4];
public:
void display(int arr[5][4])
{
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<4;j++)
		{
			cout<<arr[i][j];
		}
		cout<<endl;
	}
}
void insert()
{
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<4;j++)
		{
			cin>>arr[i][j];
		}
		cout<<endl;
	}
	display(arr);
}
void search()
{
	int count=0,k=2;
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<4;j++)
		{
			if(arr[i][j]==k)
			{
				count=1;
				break;
			}
		}
	}
	if(count==1)
	{
		cout<<"number present"<<endl;
	}
	else
	{
		cout<<"number not present"<<endl;
	}
}
};
int main()
{
	d2_array o;
	o.insert();
	o.search();
}
