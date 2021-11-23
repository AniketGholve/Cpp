#include<iostream>
using namespace std;
void longest()
{
	int n;
	cin>>n;
	cin.ignore();
	char arr[n];
	cin.getline(arr,n);
	cin.ignore();
	int i=0;
	int max=0,count=0,start=0,end=0,st=0;
	while(1)
	{
		if(arr[i]==' ' ||arr[i]=='\0')
		{
			if(count>max)
			{
				start=st;
				max=count;
			}
			count=0;	
			st=i+1;	
		}
		else
		{
			count++;
			
		}
		if(arr[i]=='\0')
		{
			break;
		}
		i++;
	}
	cout<<max<<endl;
	for(int i=0;i<max;i++)
	{
		cout<<arr[i+start];
	}
}
int main()
{
	longest();
}
