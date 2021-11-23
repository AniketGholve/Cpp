#include<iostream>
#include<math.h>
using namespace std;
int fun(int b,int e,int n)
{
	int pow1=pow(b,e);
	int fin=pow1%n;
	if(fin<0)
	{
		fin=fin*-1;
	}
	cout<<fin;
	
}
int main()
{
	fun(7,12,263);
}
