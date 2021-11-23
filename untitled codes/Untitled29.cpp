#include<iostream>
#include<cmath>
using namespace std;
class name
{
	public:
	void power()
	{
		int num,k=0,sum=0,flag=0;
		cout<<"ENtre the number : ";
		cin>>num;
		while(sum<=num)
		{
			sum=pow(3,k);
			flag=0;
			if(num==sum)
			{
				flag=1;
				break;	
			}	
			else
			{
				flag=0;
				k++;
			}
		}
		if(flag==1)
		{
			cout<<"It is the power of 3"<<endl;
			}	
		else
		{
			cout<<"it is not the power of 3"<<endl;
			}	
	}	
};
int main()
{
	name o;
	o.power();
}
