#include<iostream>
using namespace std;
class quicksort
{
	private:
		int array[100],size;
	public:
	void read()
	{
		cout<<"enter the size of array :";
		cin>>size;
		cout<<"enter the element of array \n";
		for(int i=0;i<size;i++)
		{
			cin>>array[size];
		}
	}
	 void sort()
	{
		int pivot=array[0];
		int i=0,j=size+1;
		do
		{
			i++;
			if(array[i]>pivot)
			{
				j--;
				if(array[j]<pivot)
				{
					int temp=array[j];
					array[j]=array[i];
					array[i]=temp;
				}
			}
		}while(i<=j);
			if(i>j)	
			{
			int rev=array[j];
			array[j]=array[i];
			array[i]=rev;	
			}	
			for(int k=0;k<size;k++)
			{
				cout<<array[k];
			}
		}
	};
int main()
{
	quicksort obj;
	int ans;
	do
	{
		obj.read();
		obj.sort();
		cout<<"do you want to repeat (press 1 to continue)";
		cin>>ans;
	}while(ans==1);
	return 0;
}
