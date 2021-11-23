#include<iostream>
using namespace std;
class name
{
public:
	void grade()
	{
		int mark;
		cout<<"entre the mark : " ;
		cin>>mark;
		if(mark<35&&mark>=0)
		{
			cout<<"Grade : F";
		}
		else if(mark>=35 && mark<50)
		{
			cout<<"Grade : D";
		}
		else if(mark>=50 && mark<60)
		{
			cout<<"Grade : C";
		}
		else if(mark>=60 && mark<70)
		{
			cout<<"Grade : B";
		}
		else if(mark>=70 && mark<80)
		{
			cout<<"Grade : A";
		}
		else if(mark>=80 && mark<90)
		{
			cout<<"Grade : A+";
		}
		else if(mark>=90 && mark<=100)
		{
			cout<<"Grade : O";
		}
	}	
};
int main()
{
	name o;
	o.grade();
}
