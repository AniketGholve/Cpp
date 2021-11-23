#include<iostream>
using namespace std;
class search
{
	private:
		int i,j,a[100],key,size,r;
		
	public:
		void read()
		{
			cout<<"enter the size of the array :";
			cin>>size;
			cout<<"enteh the sorted array\n";
			for(int i=0;i<size;i++)
			{
				cin>>a[i];
			}
			cout<<"\nenter the key to search : ";
			cin>>key;
		}
		void linear_search()
		{
			r=1;
			for(int i=0;i<size;i++)
			{
				if(a[i]==key)
				{
					cout<<"key found : "<<a[i]<<endl;
					r=0;
				}
			}
			if(r==1)
			{
			cout<<"key not found"<<endl;	
			}
		}
		void binary_search()
		{
			int mid,low=0,high=size,r=0;
			while(low<=high)
			{
			mid=(low+high)/2;
			if(key==a[mid])
			{
				r=1;
				break;
			}
			else if(key<a[mid])
			{
				high=mid-1;	
			}
			else
			{
				low=mid+1;
			}
			}
			if(r==1)
			{
				cout<<"key found\n";
			}
			else
			{
				cout<<"key not found\n";
			}
		}
		void sentinal_search()
		{
			int last =a[size-1];
			a[size-1]=key;
			j=0;
			while(key!=a[j])
			{
				j++;
			}
			a[size-1]=last;
			if(j<size-1||a[size-1]==key)
			{
				cout<<"key found\n";
			}
			else
			{
				cout<<"key not found\n";
			}
		}
};
int main()
{
	int ch,ans;
	search o;
	o.read();
    do
    {
    cout<<"by which method you want to search number\n1:linear search\n2:binary search\n3:sentinal search\n";
    cin>>ch;
    switch(ch)
	{
	case 1:o.linear_search();
	 	break;
	case 2:o.binary_search();
		break;
	case 3:o.sentinal_search();
		break;
	default:
		cout<<"wrong choice";
		break;
	}
	cout<<"do you want to search again";
	cin>>ans;	
	}while(ans==1);
}
