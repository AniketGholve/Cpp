#include<iostream>
using namespace std;
void pointers()
{
	int arr=2;
	int *p;
	p=&arr;
	cout<<*p ;
}
int main()
{
	pointers();
}
