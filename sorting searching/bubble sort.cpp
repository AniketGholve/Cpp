#include<iostream>
using namespace std;
class search
{
	public:
		void summ()
		{
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
			int i,j;
			for(i=0;i<n-1;i++)
			{
				for(j=0;j<n-i-1;j++)	
				{
					if(arr[j]>arr[j+1])
					{
						int temp;
						temp=arr[j];
						arr[j]=arr[j+1];
						arr[j+1]=temp;
					}
				}		
			}
			int sum=arr[n-1]+arr[n-2];
			cout<<sum;
		}
};
int main()
{
	search o;
	o.summ();
}
