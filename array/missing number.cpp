#include<iostream>
using namespace std;
void number()
{
	int arr[15]={1,4,5,7,9,10,12};
	int k=1;
	int i=0;
	while(k<=15)
	{
		if(arr[i]==k)
		{
			i++;
			k++;
		}
		else
		{
			cout<<k<<" ";
			k++;
		}
	}
}
int main()
{
	number();
}
