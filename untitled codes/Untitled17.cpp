#include<iostream>
using namespace std;
class rkt
{
	int sum=1;
	public:
int fact1(int n)
{	
	if(n>0)
	{
		sum=sum*n;
		n--;
		fact1(n);
	}
	return sum;
}
};
int main()
{
	rkt o;
	int n;
	cout<<"entre the number : ";
	cin>>n;
	cout<<o.fact1(n);
}
