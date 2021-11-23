#include<iostream>
#include<stdlib.h>
using namespace std;
class string1
{
	private:
		char a[100],b[100],c[100],r[100];
		int length_a,length_b,count,count1;
	public:
		void read()
		{
			cout<<"entre the first string : ";
			cin.getline(a,100);
			cout<<"entre the second string : ";
			cin.getline(b,100);
		}
		void len()
		{
			int i=0,j=0,count=0,count1=0;
			while(a[i]!='\0')
			{
				count++;
				i++;			
			}
			while(b[j]!='\0')
			{
				j++;
				count1++;			
			}
			length_a=count;
			length_b=count1;
			cout<<"length of the first string is: "<<length_a<<endl;
			cout<<"length of the second string is: "<<length_b<<endl;
			
		}
		void copy()
		{
			cout<<"copied string is: ";
			for(int i=0;i<length_a;i++)
			{
				c[i]=a[i];
				cout<<c[i];
			}	
		}
		void concate()
		{
			int k=0;
			int j=0;
			while(a[k]!='\0')
			{
				c[k]=a[k];
				k++;
			}
			while(b[j]!='\0')
			{
				c[k]=b[j];
				k++;
				j++;
			}
			for(int i=0;i<k;i++)
			{
				cout<<c[i];
			}
		}
		void substr()
		{
			int i=0,j=0;
			char str[100];
			int count;
			cout<<"\nentre the sub string:";
			cin.getline(str,100);
				while(a[i]!='\0')
				{
					if(a[i]==str[j])
					{
						count=1;
						while(str[j]!='\0')
						{
							if(a[i]!=str[j])
							{
								count=0;
								break;	
							} 
							i++;
							j++;
						}
						if(count==1)
						break;
					}
					else
					{
						i++;
						}	
				}
				if(count==1)
				{
					cout<<"it is a substring\n";
				}
				else 
				{	
					cout<<"not a sub string\n";
				}
		}
		void reverse()
		{
			int j=length_a-1;
			while(j>=0)
			{
			for(int i=0;i<length_a;i++)
			{
				r[j]=a[i];
				j--;
			}
			cout<<"\n reverse of the string is : ";
			for(int k=0;k<length_a;k++)
			{
				cout<<r[k];
			}
			}
		}
};
int main()
{
	string1 o;
	o.read();
	o.len();
	o.copy();
	o.concate();
//	o.substr();	
	o.reverse();
	return 0;
}
