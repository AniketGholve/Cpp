#include<iostream>
using namespace std;
class complex
{
	private:
		float real,img;
	public:
		complex()
		{
			real=0;
			img=0;
		}
		complex(float r , float i)
		{
			real=r;
			img=i;
		}
		friend complex operator +(complex c1,complex c2);
		friend complex operator *(complex c1,complex c2);
		friend istream & operator >>(istream &,complex &);
		friend ostream & operator <<(ostream &,complex &);
};
complex operator +(complex c1,complex c2)
{
	complex temp;
	temp.real=c1.real+c2.real;
	temp.img=c1.img+c2.img;
	return temp;
}
complex operator *(complex c1,complex c2)
{
	complex temp;
	temp.real=c1.real*c2.real;
	temp.img=c1.img*c2.img;
	return temp;
}
istream & operator >> (istream &in, complex &d)
    {
        cout<<"\nEnter real part: ";
        in>>d.real;
        cout<<"Enter imaginary part: ";
        in>>d.img;
        return (in) ;
    }
 ostream & operator << (ostream &out, complex &d)
    {
        out<<"\nComplex Number: "<<d.real<<"+"<<d.img<<"i";
        return(out) ;
    }
int main()
{
				
				complex c1,c2,c3,c4,c5,c6;
				cout<<"\nFirst Complex Number:";
                cin>>c1;
                cout<<"\nSecond Complex Number: ";
                cin>>c2;
                cout<<"\nAddition of two Complex Number: ";
                c3=c1+c2;
                cout<<c3;
                cout<<"\nFirst Complex Number for multiplicaton:";
                cin>>c4;
                cout<<"\nSecond Complex Number multiplicaton: ";
                cin>>c5;
                cout<<"\nmultiplicaton of two Complex Number: ";
                c6=c4*c5;
                cout<<c6;
}
