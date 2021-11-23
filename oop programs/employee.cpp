#include<iostream>
using namespace std;
class personal_record
{
	protected:
		char name[100];
		int age;
		int p_no[10];
		void read_prr()
		{	cin.ignore();
			cout<<"enter the name of employee\n";
			cin.getline(name,100);
			cout<<"\n";
			cout<<"enter the age of employee\n";
			cin>>age;
			cout<<"\n";
			//cout<<"enter the phone number of employee\n";
			//cin.getline(p_no);
			cout<<"\n";
		}
	public:
		void display_prr()
		{
			cout<<"\n"<<"name of employee = "<<name;
			cout<<"\n"<<"age of employee = "<<age<<"\n";
			//cout<<"\n"<<"phone number of employee = "<<p_no<<"\n";
		}
};
class professional_record
{
	protected:
		int experience;
		void read_pr()
		{
			cout<<"enter the experience of employee"<<"\n";
			cin>>experience;
			cout<<"\n";
		}
	public:
		void display_pr()
		{
		cout<<"experience of the employee = "<<experience<<"\n";
		}
};
class academic_record
{
	protected:
		float hsc_per;
		float ssc_per;
		void read_ar()
		{
			cout<<"enter the percent of hsc of employee"<<"\n";
			cin>>hsc_per;
			cout<<"\n";
			cout<<"enter the percent of ssc of employee"<<"\n";
			cin>>ssc_per;
			cout<<"\n";
		}
	public:
		void display_ar()
		{
		cout<<"hsc percent of employee = "<<hsc_per<<"\n";
		cout<<"ssc percent of employee = "<<ssc_per<<"\n";	
		}	
};
class employee:public personal_record,public professional_record,public academic_record
{
	public:
	void read()
	{
		read_prr();
		read_pr();
		read_ar();
	}	
	void display()
	{
		display_prr();
		display_pr();
		display_ar();
	}
};
int main()
{
	employee e[100];
	int n;
	cout<<"how many records of employee you want to store = ";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		e[i].read();
		e[i].display();
	}
}
