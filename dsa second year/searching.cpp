#include<iostream>
#include<stdlib.h>
using namespace std;
class roll_number
{
private:
  int a[60],b,n;
public:
  void get_attendance()                                               //SOUMYA GOYAL
  {                                                                   //205224
    cout<<"\n enter the total number of students present\n";
    cin>>n;
    cout<<"\nenter the roll number of present students\n";
    for(int i=0;i<n;i++)
    {
      cin>>a[i];
    }
  }
  void linear_search()
  {
    int find_number,i;
    cout<<"\n enter the roll number you wantto search for\n";
    cin>>find_number;
    for( i=0;i<n;i++)
    {
      if(find_number==a[i])
      {
	cout<<" student was present in training program";
	break;
      }
    }
    if(i==n)
    {
      cout<<" student was absent in taraining program";
    }
  }
  void binary_search()
  {
    int low_index=0,high_index=n-1,mid;
    int find_number;
    cout<<"\n enter the roll number you want to search for\n";
    cin>>find_number;
    do
    {
      mid=(low_index+high_index)/2;
      if(find_number<a[mid])
      {
	high_index=(mid-1);
      }
      else if(find_number>a[mid])
      {
	low_index=(mid+1);
      }
      else
      {
	cout<<"\n student attended the training program\n";
	break;
      }
    }
    while( low_index<=high_index);
    if(low_index>high_index)
    {
      cout<<"\n student was absent in training program\n";
    }

  }
  void recursive_call()
  {

     int find_number;
    cout<<"\n enter the roll number you want to search for\n";
    cin>>find_number;
     bubble_sorting();
    binary_recursive(a,find_number,0,n-1);
  }
  void binary_recursive(int r[50],int search_key, int low,int high)
  {
    if(low<=high)
    {
      int mid;
      mid=(low+high)/2;
      if(search_key<r[mid])
      {
        binary_recursive(r,search_key,low,mid-1);
      }
      else if(search_key>r[mid])
      {
	     binary_recursive(r,search_key,mid+1,high);
      }
      else
      {
	 cout<<"\n student attended the training program\n";
	 return;
      }
    }
    else
    {
      cout<<"\n student was absent in training program\n";
    }
  }
  void sentinel()
  {
    int find_number,temp=0,i;
    cout<<"\n enter the roll number you want to search for\n";
    cin>>find_number;
    temp=a[n-1];
    a[n-1]=find_number;
    for( i =0;a[i]!=find_number;i++)
    {
      a[n-1]=temp;
    }
    if(i<n&&a[i]==find_number)
    {
      cout<<"\n student attended the training program\n";
    }
    else
    {
      cout<<"\n student was absent in training program\n";
    }
  }
    void bubble_sorting()
  {
    float temp;
    for(int i=1;i<n;i++)
    {
      for(int counter=0;counter<n-i;counter++)
      {
	if(a[counter]>a[counter+1])
	{
	  temp=a[counter+1];
	  a[counter+1]=a[counter];
	  a[counter]=temp;
	}
      }
    }
  }
};
int main()
{
  int m;
  roll_number r;
  r.get_attendance();
  while(1)
  {
    cout<<"\nenter \n 1. for linear search  \n 2. for binary search\n 3. for binary by recursive method\n 4. for sentinel search \n 5. exit\n";
    cin>>m;
    switch(m)
    {
      case 1:
	      r.linear_search();
	break;
      case 2:
          r.bubble_sorting();
	      r.binary_search();
	break;
      case 3:
	      r.recursive_call();
	break;
      case 4:
	r.sentinel();
	break;
      case 5:
	exit(0);
    }
  }
  return 0;

}
