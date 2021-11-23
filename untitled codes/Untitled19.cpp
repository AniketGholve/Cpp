#include<iostream>
#include<math.h>
using namespace std;
class name
{
	public:
	int compare(float num)
	{
		int num1;
		num1=num;		
		cout<<"smaller integer than number"<<round(num1)-1<<endl;
		cout<<"integer number"<<round(num1)<<endl;
		cout<<"larger integer than number"<<round(num1)+1<<endl;
	}
};
int main()
{
	name o;
	float num;
	cout<<"entre the number :";
	cin>>num;
	o.compare(num);
	
}
