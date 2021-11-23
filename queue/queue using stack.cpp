#include<iostream>
#define n 5
using namespace std;
class stack1
{
	int s1[n],s2[n],top1=-1,top2=-1;
	public:
	void push1()
	{
		int data;
		cout<<"entre the data : ";
		cin>>data;
		if(top1==n-1)
		{
			cout<<"queue is full";
		}
		else
		{
			top++;
			s1[top1]=data;	
		}
	}
	void pop()
	{
		
	} 
};
int main()
{
	stack1 o;
	o.push1();
	o.push1();
	o.push1();
	o.push1();
	o.pop();
}
