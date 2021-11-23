#include<bits/stdc++.h>
#include<vector>
using namespace std;
void largestNumber(vector<int> &A) {
    int n=A.size(),sum=0;
    vector<int> ans;
    for(int i=0;i<A.size();i++)
    {
    	int m=pow(10,n);
    	int k=A[i]*m;
        ans.push_back(k);
    }
    sort(ans.begin(),ans.end());
    int n1=0;
    while(n1<2)
    {
    	int k=pow(10,n1);
    	sum=sum+(ans[n1]/k);
    	n1++;
	}
	cout<<sum;
}
int solve(vector<int> &A, int B) 
{
    int sum=0,sum1=0,tsum=0,i=0;
    int n=A.size()-1;
    for(int i=0;i<=n;i++)
    {
    	tsum=tsum+A[i];
	}
	for(int k=0;k<n-B;k++)
	{
		sum+=A[k];
	}
	for(int i=1;i<n-B;i++)
	{
		for(int j=i;j<=n-B+i;j++)
		{
			sum1+=A[j];
		}
		if(sum>sum1)
		{
			sum=sum1;
		}
	}
   return tsum-sum;
}
int main()
{
	vector<int> A;
int arr[]={-533, -666, -500, 169, 724, 478, 358, -38, -536, 705, -855, 281, -173, 961, -509, -5, 942, -173, 436, -609, -396, 902, -847, -708, -618, 421, -284, 718, 895, 447, 726, -229, 538, 869, 912, 667, -701, 35, 894, -297, 811, 322, -667, 673, -336, 141, 711, -747, -132, 547, 644, -338, -243, -963, -141, -277, 741, 529, -222, -684, 35 };
int size=sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<size;i++)
	{
		A.push_back(arr[i]);
	}
	int ans=0;
	/*A.push_back(5);
	A.push_back(-2);
	A.push_back(3);	
	A.push_back(1);
	A.push_back(2);*/
    //A.push_back(10);
	//largestNumber(A);
	cout<<solve(A,48);
}
