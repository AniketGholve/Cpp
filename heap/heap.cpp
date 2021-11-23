#include<iostream>
using namespace std;
class heap
{
	int array[100],n,n1,array1[100];
	public:
	void insert()
	{
		cout<<"entre the total number of student : ";
		cin>>n;
		cout<<"entre the marks"<<endl;
		for(int i=0;i<n;i++)
		{
			cin>>array[i];
			if(i>0)
			{
				re_heap_up(i);
			}
		}
	}
	void re_heap_up(int a)
	{
		int temp;
			while(array[a]>array[(a-1)/2] && a!=0)
			{
				temp=array[(a-1)/2];
				array[(a-1)/2]=array[a];
				array[a]=temp;
				a=(a-1)/2;
			}
	}
	void max()
	{
		cout<<"maximum marks : "<<array[0]<<endl;
	}
	void insert1()
	{
		cout<<"entre the total number of student : ";
		cin>>n1;
		cout<<"entre the marks"<<endl;
		for(int i=0;i<n1;i++)
		{
			cin>>array1[i];
			if(i>0)
			{
				re_heap_down(i);
			}
		}
	}
	void re_heap_down(int a)
	{
		int temp1;
			while(array1[a]<array1[(a-1)/2] && a!=0)
			{
				temp1=array1[(a-1)/2];
				array1[(a-1)/2]=array1[a];
				array1[a]=temp1;
				a=(a-1)/2;
			}
	}
	void min()
	{
		cout<<"minimum marks : "<<array1[0]<<endl;
	}
};
int main()
{
	int key,ans;
heap s;
do
{
cout<<"what do you want to find\n1:maximum marks\n2:minimum marks\nselect form the above : ";
cin>>key;
switch(key)
{
case 1: s.insert();
	    s.max();	
	    break;
case 2: s.insert1();
	    s.min();
	    break;	
}
cout<<"want to cont press 1";
cin>>ans;
}while(ans==1);
}
