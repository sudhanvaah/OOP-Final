#include<iostream>

using namespace std;

class x

{

 int a,b,c;

 public:

 inline int max()

 {

 cout<<"Enter three numbers ";

 cin>>a>>b>>c;

 if(a>b)

 {

 if(a>c)

 return a;

 else

 return c;

 }

 else

 {

 if(b>c)

 return b;

 else

 return c;

 }

 }

};

int main()

{

 x obj;

 int m;

 m=obj.max();

 cout<<"\nThe largest is "<<m<<endl;

 return 0;

}
