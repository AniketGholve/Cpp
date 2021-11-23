#include<iostream>
#include<string.h>
using namespace std;
class name
{
	public:
		void string()
		{
			char str[100];
			int i;
			cout<<"Entre the string : ";
			cin>>str;
			for( i=0;i<=strlen(str);i++)
			{
				for(int j=i+1;j<=strlen(str);j++)
				{
					if(str[i]==str[j])
					{		
						goto step1;
					}
				}
			}
			step1: cout<<str[i];
		}
};
int main()
{
	name o;
	o.string();
}
