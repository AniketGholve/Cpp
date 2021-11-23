#include<iostream>
/*in this we learn that if we initilize array and dont give any number it will print 0 in place of it*/
using namespace std;
class array
{
	int a[10]={10,5};
	public:
	void r1()
	{
		for(int i=0;i<10;i++)
		{
			cout<<a[i]<<" ";
		}
	}	
};
int main()
{
	array o;
	o.r1();
}
