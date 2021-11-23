#include<iostream>
#include<string>
using namespace std;
void fun(string s)
{
	int len=s.length();
	int tds=len*(len+1)/2;
    int temp = 0;  
    int ts=0; 
        for(int i = 0; i < len; i++) {  
            for(int j = i; j < len; j++) {   
				ts++; 
            }  
        }  
        int count=ts;
        if(count<0)
        {
        	count=-count;
		}
		cout<<count;
}
int main()
{
	string s="aabb";
	fun(s);
}
