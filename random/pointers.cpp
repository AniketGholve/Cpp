#include<iostream>
using namespace std;
int main()
{
	int arr[]={1,2,3,4};
	cout<<*arr<<endl;	
	int *ptr=arr;
	for(int i=0;i<4;i++)
	{
		cout<<*ptr<<endl;
		ptr++;
	}	
}
