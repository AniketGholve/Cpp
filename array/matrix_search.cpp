#include<iostream>
using namespace std;
void search()
{
	int n,m;
	cout<<"entre the matrix size";
	cin>>n>>m;
	int arr[n][m],k=18;
	cout<<"entre the matrix values";
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>arr[i][j];
		}
	}
	int i=0,j=0,count=0;
	while(i<n)
	{
		if(arr[i][j]==k)
		{
			count=1;	
			break;
		}
		else if(arr[i][j]>k)
		{
			j--;
			i++;
		}
		else if(arr[i][j]<k && j<=m)
		{
			if(j==m)
			{
				i++;
				j=0;
			}
			else
				j++;
		}
	}
	if(count==1)
	{
		cout<<"value found"<<endl;
	}
	else
	{
		cout<<"value not found"<<endl;
	}
}
int main()
{
	search();
}
