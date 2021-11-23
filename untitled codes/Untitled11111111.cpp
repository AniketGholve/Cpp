#include<iostream>
using namespace std;
vector<int> wave(vector<int> &A) 
{
    sort(A.begin(),A.end());
    for(int i=0;i<A.size();i+=2)
    {
        if(i%2==0 && A[i+1]!='\0')
        {
            swap(A[i],A[i+1]);
        }
    }
    return A;
}
int main()
{
	vector<int>a;
	a.pushback(1);
	a.pushback(2);
	a.pushback(3);
	a.pushback(4);
	a.pushback(5);
	cout<<wave(a);
}
