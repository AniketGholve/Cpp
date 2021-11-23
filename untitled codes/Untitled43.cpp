#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
class name 
{
	public:
		void string()
		{
			char str[100],str1[100];
			cin.getline(str,100);
			int count=0;
			for(int i=0;i<strlen(str);i++)
			{
				if(str[i]!=' ')
				{
					str1[count++]=str[i];
				}
			}
			cout<<str1;
		}
};
int main()
{
	name o;
	o.string();
}
