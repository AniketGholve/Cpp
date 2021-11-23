
#include<iostream>
using namespace std;

/*template<class T>
void read(T data[],int n);
template<class T>
void sort(T data[],int n);
template<class T>
void display(T data[],int n);*/
template<class T>
void read(T data[],int n)
{
	cout<<"\nEnter the values:";
	for(int i=0;i<n;i++)
		cin>>data[i];
}
template<class T>
void sort(T data[],int n)
{	int min;
	T temp;
	for(int i=0;i<n-1;i++)
	{ min=i;
	   for(int j=i+1;j<n;j++)
	   {
	     	if(data[min]>data[j])
	     	{
		         min=j;
		    }
	   }
	     temp=data[i];
	     data[i]=data[min];
	     data[min]=temp;
	}
}

template<class T>
void display(T data[],int n)
{
	cout<<"\nSorted array:";
	for(int i=0;i<n;i++)
		cout<<data[i]<<"  ";
	cout<<"\n";
}


int main()
{
	int length, choice, ans;
	int data1[20];
	float data2[20];
	string data3[20];

	do
    {
	cout<<"\n________Template_______"
        <<"\n1.Integer"
        <<"\n2.Float"
        <<"\n3.String"
        <<"\nEnter your Choice: ";
    cin>>choice;
	switch(choice)
	{
	    case 1:
	        cout<<"Enter size of the array: ";
            cin>>length;
	        read(data1,length);
            sort(data1,length);
            display(data1,length);
	        break;
        case 2:
            cout<<"Enter size of the array: ";
            cin>>length;
            read(data2,length);
            sort(data2,length);
            display(data2,length);
            break;
        case 3:
            cout<<"Enter size of the array: ";
            cin>>length;
            read(data3,length);
            sort(data3,length);
            display(data3,length);
            break;
        default:
            cout<<"INvalid Choice!!!";
	}
        cout<<"Do you want to continue?\n(Press 0 for exit): ";
        cin>>ans;
    }while(ans!=0);
	return 0;
}
