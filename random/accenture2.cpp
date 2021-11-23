#include<iostream>
#include<cmath>
using namespace std;
int min_max()
{
    int arr1[]={9,16,12,5,15};
    int arr2[]={14,7,22,5,32,77};
    int count=0;
    int n1=sizeof(arr1)/sizeof(arr1[0]);
    int n2=sizeof(arr2)/sizeof(arr2[0]);
    int max1=INT_MIN,max2=INT_MIN;
    int min1=INT_MAX,min2=INT_MAX;
    for(int i=0;i<n1;i++)
    {
        if(arr1[i]>max1)
        {
            max1=arr1[i];
        }
    }
    for(int i=0;i<n2;i++)
    {
        if(arr2[i]>max2)
        {
            max2=arr2[i];
        }
    }
    for(int i=0;i<n1;i++)
    {
        if(arr1[i]<min1)
        {
            min1=arr1[i];
        }
    }
    for(int i=0;i<n2;i++)
    {
        if(arr2[i]<min2)
        {
            min2=arr2[i];
        }
    }

    if(max1==max2)
    {
        count+=1;
    }
    else
    {
        count+=2;
    }

    if(min1==min2)
    {
        count+=1;
    }
    else
    {
        count+=2;
    }
    return count;
}
int main()
{
    int t=min_max();
    cout<<t;
}
