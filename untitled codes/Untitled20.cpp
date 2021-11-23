#include<iostream>
using namespace std;
class name
{
	public:
		void arr1()
		{
			
			int arr[10]={1,2,1,2,10,2,1,2,1,1};
			for(int i=0;i<10;i++)
			{
				int flag=0;
				for(int n=0;n<10;n++)
				{
					if(arr[i]!=arr[n]||n==i)
					{	
						flag=1;
					}
					else
					{
						flag=0;
						break;
					}
				}
				if(flag==1)
				{
					cout<<arr[i]<<" ";	
				}	
			}	
		}
};
int main()
{
	name o;
	o.arr1();
}
