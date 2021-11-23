#include<iostream>
using namespace std;
class stack
{
int s1[10],top=-1;
public :
	void push(int x)
	{
		top++;
		s1[top]=x;	
	}
	int pop()
	{
		int r=s1[top];
		top--;
		return r;
	}
	void display()
	{
		for(int i =top;i>=0;i--)
		{
			cout<<s1[i]<<endl;
		}
	}
};
int main()
{
	stack o;
	o.push(5);
	o.push(4);
	o.push(3);
	o.push(2);
	o.push(1);
	o.display();
	cout<<"pop element is : "<<o.pop()<<endl;
	cout<<"pop element is : "<<o.pop()<<endl;
	o.display();
}
