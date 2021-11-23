#include<iostream>
#include<deque>
#include<cstring>
#include<stdlib.h>
using namespace std;
int main()
{
	deque <int>p;
	deque<int>::iterator itr;
	cout<<"enter the choise among the following \n1. Insert at end \n2. Insert at front\n 3. Delete at position \n4.Delete at back \n5. Delete at front \n6.Display(using iterator)\n7.Display and make queue empty\n8.Check queue is empty or not \n9.Size of queue \n";
	int ch,n;
	cin>>ch;
	switch(ch)
	{
		case 1:
				cout<<"entre the number(at first)";
			   	cin>>n;  			
				p.push_front(n);
				break;
		case 2:
		cout<<"entre the number (last)";
		cin>>n;
		p.push_back(n);
		break;
		case 3:cout<<"enter the position";
				int pos;
				cin>>pos;
				itr=p.begin();
				advance(itr,pos);
				p.erase(itr);
				break;
		case 4:p.pop_back();
		break;
		case 5:p.pop_front();
		break;
		case 6:itr=p.begin();
				while(itr!=p.end())
				{
					cout<<" "<<*itr;
					itr++;
				}
				break;
		case 7:while(!p.empty())
		{
			cout<<' '<<p.front();
			p.pop_front();
		}
		break;
		case 8:if(p.empty()==1)
		{
			cout<<"it is empty";
		}
		case 9:cout<<"size of queue is: "<<p.size();
		break;		
	}
}

