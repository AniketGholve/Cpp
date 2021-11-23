#include<iostream>
using namespace std;
class calculator
{
	private:
	public:
	char op;
	float num1,num2;	
	void input();	
	void add();
	void sub();
	void div();
	void mul();
	void percent();
};
void calculator::input()
{
	cout<<"enter the equation in sutiable form eg(1+2 or 2/1)\n";
	cin>>num1>>op>>num2;
}
void calculator::add()
{
	float add1;
	add1=num1+num2;
	cout<<"addition of two numbers is = "<<add1<<"\n";
}
void calculator::sub()
{
	float sub1;
	sub1=num1-num2;
	cout<<"substraction of two numbers is = "<<sub1<<"\n";
}
void calculator::mul()
{
	float mul1;
	mul1=num1*num2;
	cout<<"multiplication of two numbers is = "<<mul1<<"\n";
}
void calculator::div()
{
	float div1;
	div1=num1/num2;
	cout<<"division of two numbers is = "<<div1<<"\n"; 
}

int main()
{
	
	calculator obj;
	obj.input();
	switch(obj.op)
	{
		case '+' :obj.add();
		break;
		case '-' :obj.sub();
		break;
		case '*' :obj.mul();
		break;
		case '/' :obj.div();
		break;
	}
	return 0;
}
