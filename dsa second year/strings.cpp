#include<iostream>
#include<stdlib.h>
using namespace std;
class strings
{
private:
  char a[20],c[50];
  char b[20];


public:
  void get_array()
  {
    cout<<"\n enter array a\n";
    cin>>a;
    cout<<"\n enter array b\n";
    cin>>b;
  }
  int get_length(char d[])
  {
  	int i;
     for( i=0;d[i]!='\0';i++)
    {

    }

    return i;
  }
  void copy()
  {
      int k=0;
      for(int j=0;j<get_length(a);j++)
      {
	    c[k]=a[j];
        k++;

      }
      c[k]='\0';
      cout<<"\n array c is \n";
      cout<<c<<endl;
  }
  void callto_len_a()
  {
    int i;
    i=get_length(a);
    cout<<"\n size of array a\n";
    cout<<i<<endl;
  }
  void callto_len_b()
  {
  	int i;
    i=get_length(b);
    cout<<"\n size of array b\n";
    cout<<i<<endl;
  }
  void equal_array()
  {
      if(get_length(a)==get_length(b))
      {
	int i;
	for(i=0;i<get_length(a);i++)
	{
	  if(a[i]==b[i])
	  {}
	  else
	  {
	    break;
	  }
	}
	if(i==get_length(a))
	{
	  cout<<"\n two arrays are equal\n";
	}
	else
	{
	  cout<<"\n two arrays are not equal\n";
	}
      }
      else
      {
	cout<<"\n two arrays are not equal\n";
      }
    
  }
  void concatenate()
{
       int k,j;
       char f[50];
      for( j=0;j<get_length(a);j++)
      {
	    f[k]=a[j];
        k++;
      }
      k=get_length(a);
      for(j=0;j<get_length(b);k++,j++)
      {
         f[k]=b[j];
      }
      f[k]='\0';
      cout<<"\n concatenated array is\n";
      cout<<f;

}

  void reverse_string()
  {
    char e;
    int j=get_length(a)-1;
    for(int i=0;i<(get_length(a)/2);i++)
    {
      e=a[i];
      a[i]=a[j];
      a[j]=e;
      j--;
    }
    cout<<"\nreverse of array is\n";
    cout<<a<<endl;
  }
  void substring()
  {
  	
    int k,e=0,e1=0;
    for(int i=0;a[i]!='\0';i++)
    {
      k=i;
      e1=0;
      for(int j=0;b[j]!='\0';j++)
      {
      	  if(b[j]!=a[k])
	  {   
	    e1=1;
	    break;
	  }
	  k++;
      }
      if(e1==0)
      {
	cout<<"\nsubstring found\n";
	cout<<"\nposition of substring is"<<i<<"\n";
	e++;
      }
    }
    if(e==0)
    {
      cout<<"\n substring not found\n";
    }
    else
    {
      cout<<"\ntotal number of times when substring is present\n";
      cout<<e;
    }
  }
};
int main ()
{
  int n;
  strings obj;
  obj.get_array();
  while(1)
  {
    cout<<"\n Enter\n 1. To get the length of first array\n 2.To get the length of of second array\n 3.To check if 2 strings are equal\n 4.To check if substring is present \n 5. To concenate 2 arrays\n 6. To copy one array into other\n 7.To reverse array\n8. exit\n";
    cin>>n;
    switch(n)
    {
      case 1:
	    obj.callto_len_a();
        break;
      case 2: 
        obj.callto_len_b();
        break;
      case 3:
        obj.equal_array();
        break;
      case 4:
        obj.substring();
        break;
      case 5:
        obj.concatenate();
        break;
      case 6:
        obj.copy();
        break;
      case 7:
       obj.reverse_string();  
       break;
      case 8:
	exit(0);
  }
  }
  return 0;
}
