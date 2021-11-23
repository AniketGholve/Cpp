#include<iostream>
using namespace std;
void array1()
{
    int arr[]={8,4,5,3,2,6,9,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++)
    {
        int num1=0,num2=0,j=i+1;
        while(j<n)
        {
            if(arr[i]<arr[j] && j!=i)
            {
                num1=num1+arr[j];
            }
            else if(arr[i]>arr[j] && j!=i)
            {
                num2=num2+arr[j];
            }
            j++;
        }
        cout<<num1*num2<<" ";
    }
}
int main()
{
    array1();
}