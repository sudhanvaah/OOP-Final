#include<iostream>
using namespace std;
class comp
{
double real,imag;
public:
comp()
{
    real=0;
    imag=0;
}
comp(double r,double i)
{
    real=r;
    imag=i;
}
void display()
{
    cout<<real<<"+i"<<imag<<"\n";
}
friend comp add(comp a,comp b)
{
    comp c;
    c.real=a.real+b.real;
    c.imag=a.imag+b.imag;
    return c;
}
friend comp mul(comp a,comp b)
{
    comp c;
    c.real=(a.real*b.real)-(a.imag*b.imag);
    c.imag=(a.imag*b.real)+(a.real*b.imag);
    return c;
}
};
int main()
{
double real,imag;
cout<<"Creating two complex numbers\n";
cout<<"\nEnter complex number a ";
cout<<"\nEnter real part ";
cin>>real;
cout<<"Enter imaginary part ";
cin>>imag;
comp a(real,imag);
cout<<"\nEnter complex number b ";
cout<<"\nEnter real part ";
cin>>real;
cout<<"Enter imaginary part ";
cin>>imag;
comp b(real,imag);
comp c;
c=add(a,b);
cout<<"\na + b = ";
c.display();
c=mul(a,b);
cout<<"\na x b = ";
c.display();
}
