#include<iostream>
#include<iomanip>
using namespace std;
template<class t>
void bubble(t a[])
{
t temp;
for(int i=0;i<4;i++)
 for(int j=4;i<j;j--)
    if(a[j]<a[j-1])
     {
         temp=a[j];
         a[j]=a[j-1];
         a[j-1]=temp;
     }
}
int main()
{
int x[5];
float y[5]={1.1,5.5,3.3,4.4,2.2};
cout<<"\nEnter 5 integers ";
for(int i=0;i<5;i++)
    cin>>x[i];
cout<<"\nEnter 5 floating point numbers ";
for(int i=0;i<5;i++)
    cin>>y[i];
bubble(x);
bubble(y);
cout<<"\nsorted integers: ";
for(int i=0;i<5;i++)
cout<<x[i]<<" ";
cout<<"\n";
cout<<"\nSorted floating point numbers: ";
for(int j=0;j<5;j++)
cout<<y[j]<<" ";
cout<<"\n";
return 0;
}
