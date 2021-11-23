#include<iostream>
#include<string.h>
using namespace std;
class name
{
	public:
		void string()
		{
			char str[100];
			cout<<"Entre the string : ";
			cin.getline(str,100);
			cout<<"Reverse String is : ";
			for(int i=strlen(str);i>=0;i--)	
			{
				cout<<str[i];
			 } 
		}
};
int main()
{
	name o;
	o.string();
}
