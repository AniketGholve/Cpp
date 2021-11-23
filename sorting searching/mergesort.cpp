#include<iostream>
using namespace std;
void merge(int arr[],int lb,int mid,int ub)
{
	int n1 = mid - lb + 1;
    int n2 = ub - mid;
	 int L[n1], R[n2];
	for (int i = 0; i < n1; i++)
        L[i] = arr[lb + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];
        
	int i = 0;
	
	int j =	0;
	
	int k = lb;
	
	    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
 
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
 
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }    
}
void mergesort(int arr[],int lb, int ub)
{
	int mid;
	if(lb>=ub)
	{
		return;
	}
	
		mid=(lb+ub)/2;
		mergesort(arr,lb,mid);
		mergesort(arr,mid+1,ub);
		merge(arr,lb,mid,ub);
}

int main()
{
	int arr[12]={2,5,34,24,52,22,565,222,444,100,0,150};
	int lb=0;
	int ub=sizeof(arr)/sizeof(arr[0]);
	mergesort(arr,lb,ub-1);
	for(int i=lb;i<ub;i++)
	{
		cout<<arr[i]<<" ";
	}
}
