#include<iostream>
using namespace std;
void tab()
{
	int arr[]={3,5,2,4,1,6};
	int i=5;
	while(i>0)
	{
		swap(arr[i-1],arr[i]);
		i--;
	}
	for(int i=0;i<6;i++)
	{
		cout<<arr[i]<<" ";
	}
}
int main()
{
	tab();
}
