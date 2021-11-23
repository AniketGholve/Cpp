#include<iostream>
using namespace std;
class name
{
	public:
		void number()
		{
			int num=151,sum=0;
			while(num<290)
			{
				if(num%3==0)
				{
				sum=sum+num;	
				}
				num++;
			}
			cout<<"number is : "<<sum;
		}

};
int main()
{
	name o;
	o.number();
}
