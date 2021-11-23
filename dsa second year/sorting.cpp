#include<iostream>
using namespace std;
class search
{
	private:
		int key,size,array[100];
	public:
		void read()
		{
			cout<<"entre the size of array = ";
			cin>>size;
			cout<<"\nenter the data of array\n";
			for(int i=0;i<size;i++)
			{
			cin>>array[i];
			}
		}
		void selection_sort()
		{
			int i,j;
			for(i=0;i<size;i++)
			{
				int min;
				min=i;
				for(j=i+1;j<size;j++)
				{
					if(array[min]>array[j])
					{
						min=j;	
					}
				}
				int temp;
				temp=array[i];
				array[i]=array[min];
				array[min]=temp;			
				cout<<"array after "<<i+1<<"pass is :[";
				for(int r=0;r<size;r++)
				{
				cout<<array[r]<<" ";
				}
				cout<<"]\n";
			}
		}
		void bubble_sort()
		{
			int i,j;
			for(i=0;i<size-1;i++)
			{
				for(j=0;j<size-i-1;j++)	
				{
					if(array[j]>array[j+1])
					{
						int temp;
						temp=array[j];
						array[j]=array[j+1];
						array[j+1]=temp;
					}
				}
				cout<<"array after "<<i+1<<"pass is : [";
				for(int k=0;k<size;k++)
				{
					cout<<array[k]<<" ";
				}
				cout<<"]\n";		
			}
		}
		void insertation_sort()
		{
			int temp,j,i=1;
			j=i-1;
			for(i=1;i<size;i++)
			{	
				int key=array[i];
				j=i-1;
			    while(j>=0 && array[j]>key)	
				{											
					array[j+1]=array[j];	
					j=j-1;						
				}
					array[j+1]=key;
				cout<<"array after"<<i<<"pass : [";
			for(int k=0;k<size;k++)
			{
				cout<<array[k]; 
			}
			cout<<"]\n";
			}
		}
};
int main()
{
	search obj;
	obj.read();
	int ch,ans;	
	do
	{
	cout<<"enter the choice:\n1:selection sort\n2:bubble sort\n3:insertion sort\n";
	cin>>ch;
	switch(ch)
	{
	case 1:obj.selection_sort();
	break;
	case 2:obj.bubble_sort();
	break;
	case 3:obj.insertation_sort();
	break;
	cout<<"if you want to continue (press 1)";
	cin>>ans;
	}
	}while(ans==1);
	return 0;
}
