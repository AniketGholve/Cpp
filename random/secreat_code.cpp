#include<iostream>
#include<string>
using namespace std;
void encrept()
{
    string str;
    cout<<"enter the sentence ";
    getline(cin,str);
    int n=str.length();
    int i=0;
    while(i<n)
    {
        int s=str[i]+3;
        if(s>122)
        {
            s=s-26;
        }
        char t=s;
        cout<<t;
        i++;
    }
}
int main()
{
    encrept();
}