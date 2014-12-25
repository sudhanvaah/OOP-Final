#include<iostream>
using namespace std;
int main()
{
int a,b;
cout<<"Enter a and b for a/b ";
cin>>a>>b;
try
{
if(b==0)
 throw 0;
cout<<"\n"<<a<<"/"<<b<<" = "<<(float)a/b;
}
catch(int)
{
cout<<"Error! Divide by zero not possible.";
}
return 0;
}
