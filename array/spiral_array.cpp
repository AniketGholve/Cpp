#include<iostream>
using namespace std;
void insert()
{
	int arr[3][3];
	int row_s=0,row_e=2,col_s=0,col_e=2;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cin>>arr[i][j];
		}
	}
	while(col_s<=col_e && row_s<=row_e)
	{
		for(int col=col_s;col<=row_e;col++)
		{
			cout<<arr[row_s][col]<<" ";
		}
		row_s++;
		for(int row=row_s;row<=row_e;row++)
		{
			cout<<arr[row][col_e]<<" ";
		}
		col_e--;
		for(int col=col_e;col>=col_s;col--)
		{
			cout<<arr[row_e][col]<<" ";
		}
		row_e--;
		for(int row=row_e;row>=row_s;row--)
		{
			cout<<arr[row][col_s]<<" ";
		}
		col_s++;
	}
}
int main()
{
	insert();
}
