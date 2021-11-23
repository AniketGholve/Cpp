#include <bits/stdc++.h>

using namespace std;

string isBalanced(string s) {
    stack<char>s1;
    int count=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='('||s[i]=='{'||s[i]=='[')
        {
            s1.push(s[i]);
            count++;
        }
        else if( s1.top()=='('&& s[i]==')') {
            count--;
            s1.pop();
        }
        else if( s1.top()=='{' && s[i]=='}' ) {
            count--;
            s1.pop();
        }
        else if(s1.top()=='[' && s[i]==']' ) {
            count--;
            s1.pop();
        }
        else if(s1.empty())
        {
        	return "1";
            
        }
    }
    if(count>0)
    {
        return "NO";
    }
    else {
        return "YES";
    }
}

int main()
{
    int n;
    string temp;
    cin>>n;
    for(int i=0;i<n;i++)
    {
    	cin.ignore();
        getline(cin,temp);
        string o=isBalanced(temp); 
        cout<<o;
    }
    return 0;
}
