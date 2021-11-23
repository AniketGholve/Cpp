#include<iostream>
using namespace std;
 int repeat()
 {
 	int arr[7]={1,2,3,4,5,6,2};
 	int n=7;
 	int count=0;
 	for(int i=0;i<n;i++)
 	{
 		for(int j=i+1;j<n;j++)	
 		{
 			if(arr[j]==arr[i])
 			{
 				count++;
 				return count+1;
			}
		}
	}
	if(count==0)
	{
		return -1;
	}
 }
 int main()
 {
 	int n=repeat();
 	cout<<n<<endl;
 }

