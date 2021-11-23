#include<iostream>
#include<stdlib.h>
#include<string.h>
#define MAX 50
using namespace std;
class stak                           //SOUMYA GOYAL
{                                     //205224
private:                               
    int top;
    char stk[MAX];
public:
    stak()
    {
        top=-1;
    }
    int Isfull()
    {
        if(top==MAX-1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    int Isempty()
    {
        if(top==-1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
     void push(char a)
    {
        if(Isfull()==1)
        {
            cout<<"\n error : stack is full \n";
        }
        else
        {
            stk[++top]=a;
        }
    }
    char pop()
    {
        if(Isempty()==1)
        {
            cout<<"\n error : stack is empty \n";
        }
        else
        {
            return stk[top--];
        }
    }
};
class pallindrome
{
private:
    char  a[50],b[50];
    int m;
    int length,length_b;
    stak s;
public:
    void get_string()
    {
        cout<<"\n Enter the string\n";
        cin.getline(a,50);
		cin.getline(a,50);
		length=strlen(a);
    }
    void add_element(char k[50],int length)
    {
        for(int i=0;i<length;i++)
	{
               s.push(k[i]);
        }
    }
    void check_pallindrome(char k[50],int length)
    {
        int flag=0;
        for(int i=0;i<length;i++)
        {
           if(k[i]!=s.pop())
           {
               flag=1;
               break;
           }
		}	
        if(flag==0)
        {
            cout<<"\n String is palindrome\n";
        }
        else
        {
            cout<<"\n String is not palindrome\n";
        }
    }
    void remove_punctuation()
    {
      int k=0;
      for(int i=0;i<length;i++)
      {
		if(a[i]>=65&&a[i]<91||a[i]>=97&&a[i]<123)
		{
		  b[k]=a[i];
	  	  k++;
		}
      }
      length_b=k;
       for(int j=0;j<k;j++)
	   {
			 cout<<b[j];	   
	   }
    }
    void convert_upper_to_lower()
    {
      for(int i=0;i<length;i++)
      {
    	if(a[i]>=65&&a[i]<91)
		{
		  a[i]=a[i]+32;
		}
      	 cout<<a[i];
	  }
      }
    void call_pallindrome(int flag)
    {
      if(flag==0)
      {
	add_element(a,length);
	check_pallindrome(a,length);
      }
      else
      {
	add_element(b,length_b);
	check_pallindrome(b,length_b);
      }
    }
    void reverse_array()
    {
      add_element(a,length);
      int j=0;
      while(s.Isempty()!=1)
      {
	
	a[j]=s.pop();
	j++;
      }
      length=j;
      cout<<a;    
    }
};
int main()
{
    int q;
    pallindrome p;
    while(1)
    {
        cout<<"\n Enter \n 1. for entering the string \n 2. for checking palindrome\n 3. for removing punctuations \n 4. for converting upper case to lower case\n 5. for checking whether string is palindrome or not after removing punctuations \n 6. for rverse array \n 7. EXIT \n";
        cin>>q;
        switch(q)
        {
        	case 1:
            	p.get_string();
            	break;
        	case 2:
           		 p.call_pallindrome(0);
            	break;
			case 3:
	  			p.remove_punctuation();
	  			break;
			case 4:
	  			p.convert_upper_to_lower();
	  			break;
			case 5:
			     p.call_pallindrome(1);
	  			 break;
	  		case 6 :
	 			 p.reverse_array();
	  			  break;
            case 7:
                exit(0);
        }
    }
    return 0;
}
