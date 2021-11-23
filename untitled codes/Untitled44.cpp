#include<iostream>
using namespace std;
class name 
{
	public:
	void matrix()
	{
		int arr[10][10],n,sum=0;
		cout<<"Entre the row of matrix : ";
		cin>>n;
			for(int i =0;i<n;i++)
			{
				for(int j=0;j<n;j++)
				{
					cout<<"Entre the "<<j+1<<" element : ";
					cin>>arr[i][j];
					cout<<endl;
				}
			}
			for(int i =0;i<n;i++)
			{
				for(int j=0;j<n;j++)
				{
					if(i==0||i==n-1)
					{
						sum=sum+arr[i][j];
					}
					else if(i!=n-1||i!=0)
					{
						sum=sum+
					}
				}
			}
			
			
			
	}
};
int main()
{
	name o;
	o.matrix();
}
