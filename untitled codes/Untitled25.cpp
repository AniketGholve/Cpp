#include<iostream>
#include<string.h>
using namespace std;
class name
{
	public:
		void string()
		{
			char str1[100],str2[100];
			cout<<"enter string 1 : ";
			cin>>str1;
			cout<<"enter string 2 : ";
			cin>>str2;
			int n=strlen(str1);
			
				for(int j=0;j<=strlen(str2);j++)
				{
					str1[j+n]=str2[j];
				}
			cout<<str1;
		}
};
int main()
{
	name o;
	o.string();
}
