#include<bits/stdc++.h>
using namespace std;
class num
{
	int n,arr[100],arre[100],arro[100];
	int enum1=0,onum1=0;
	public:
	void input()
	{
		cout<<"Enter the size of array ";
		cin>>n;
		cout<<"Entre the element of array";
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
	}
	void oddeven()
	{	
		
		for(int j=0;j<n;j++)
		{
			if(j%2==0)
			{
				arre[enum1]=arr[j];	
				enum1++;
			}
			else
			{
				arro[onum1]=arr[j];
				onum1++;
			}
		}
		for(int i=0;i<enum1;i++)
		{
			for(int j=0;j<enum1;j++)
			{
				if(arre[i]<arre[j])
				{
					int temp=arre[i];
					arre[i]=arre[j];
					arre[j]=temp;
				}
			}
		}
		for(int i=0;i<onum1;i++)
		{
			for(int j=0;j<onum1;j++)
			{
				if(arro[i]<arro[j])
				{
					int temp=arro[i];
					arro[i]=arro[j];
					arro[j]=temp;
				}
			}
		}
	}
	int addition()
	{
		int sum =arre[enum1-2]+arro[1];
		return sum;			
	}			
};

int main()
{
	num o;
	o.input();
	o.oddeven();
	int z=o.addition();
	cout<<"Sum = "<<z<<endl;
}
