#include<iostream>
using namespace std;
class calc
{
    public:
    int a,b;
    void add()
    {
     cout<<(a+b)<<"\n";
    }
    void sub()
    {
     cout<<(a-b)<<"\n";
    }
    void mul()
    {
     cout<<(a*b)<<"\n";
    }
    void div()
    {
     cout<<(float)a/b<<"\n";
    }

};

int main()
{
calc obj;
int choice;
cout<<"Enter two numbers ";
cin>>obj.a>>obj.b;
while(1)
{
cout<<"\nEnter 1 to add, 2 to subtract, 3 to multiply, 4 to divide, 0 to exit ";
cin>>choice;
switch(choice)
{
case 1:obj.add();break;
case 2:obj.sub();break;
case 3:obj.mul();break;
case 4:obj.div();break;
case 0: return 0;
default:cout<<"\nInvalid input";
}
}
}
