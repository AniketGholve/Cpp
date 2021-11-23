#include<iostream>
#include<string.h>
using namespace std;
class name
{
	public:
		void string()
		{
			char str[100],str1[100];
			cout<<"Enter the string : ";
			cin>>str;
			cout<<"entre the substring : ";
			cin>>str1;
			int n=strlen(str);
			
				int j=0,i=0,flag=0;
			while(i!=n)
			{
				while(str[i]==str1[j])
				{
					if(j==strlen(str1)-1)
					{
						flag=1;
						break;
					}
					j++;
				}
				i++;
			}
			if(flag==1)
			{
				cout<<"It is a Substring "<<endl;
			}
			else
			{
				cout<<"It is not a Substring "<<endl;
			}
		}
};
int main()
{
	name o;
	o.string();
}
