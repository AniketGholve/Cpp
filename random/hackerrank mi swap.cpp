#include <bits/stdc++.h>
using namespace std;
// Complete the minimumSwaps function below.
int minimumSwaps(vector<int> arr) {
   pair<int,int>arrnum[arr.size()];
   int n=arr.size();
   int count=0,sum=0;
   for(int i=0;i<n;i++)
   {
       arrnum[i].first=arr[i];
       arrnum[i].second=i;
   }
    sort(arrnum,arrnum+n);
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=arrnum[i].first)
        {
            swap(arr[i],arr[arrnum[i].second]);
            count+=1;   
        }
        if(count>1)
        {
        	sum+=count-1;
		}
    }
    return sum;
}


int main()
{
	int n;
	vector<int> arr;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int d;
		cin>>d;
		arr.push_back(d);
	}
	cout<<minimumSwaps(arr);
}

