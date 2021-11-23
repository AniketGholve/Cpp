#include <iostream>
using namespace std;
int main()
{
	int array[4]={1,2,3,4};
	int sequence[2]={2,4};
	int n=sizeof(array)/sizeof(array[0]);
	int k=sizeof(sequence)/sizeof(sequence[0]);
	int count=0;
	int arr[k]={0};
	
	for(int i=0;i<k;i++)
		{
			for(int j=0;j<n;j++)
				{
					if(sequence[i]==array[j])
						{
							arr[j]=array[j];	
						}
				}
		}
	for(int y=0;y<k;y++)
	{
		cout<<arr[y]<<" ";
	}
}
