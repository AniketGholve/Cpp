#include <iostream>
#include <stack>
#include <string>
using namespace std;
void reverse()
{
	stack<string> s;
	string str;
	cout << "entre the string";
	getline(cin, str);
	int n = str.length();
	int i = 0,j=0;
	while (j <= n)
	{
		i=j+1;
		while (j <=n && str[j] !=' ')
		{
			//cout<<str[j];
			j++;
		}
		string temp = str.substr(i, j);
		s.push(temp);
		cout<<temp<<endl;
	}
	/*while (!s.empty())
	{
		cout <<s.top()<<" ";
		s.pop();	
	}
	cout<<str;*/
}
int main()
{
	reverse();
}
