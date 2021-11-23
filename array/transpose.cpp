#include<iostream>
using namespace std;
void transpose()
{
	int n,m;
	cin>>n>>m;
	int arr[n][m],arrt[m][n];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>arr[i][j];
		}
	}
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			arrt[i][j]=arr[j][i];
			cout<<arrt[i][j];
		}
		cout<<endl;
	}
}
int main()
{
	transpose();
}
