#include<iostream>
using namespace std;
int f=0;
int r=-1;
template <class T>
class q
{

 T q1[4];
 public:
 void insert()
 {
 T item;
 cout<<"\nEnter element ";
 cin>>item;
 if(r>=3)
    cout<<"\nOverflow";
 else
    q1[++r]=item;
 }
 void delet()
 {
 if(r==-1)
    cout<<"\nUnderflow";
 else
    cout<<"\n"<<q1[f++]<<" is deleted";
 if(f>r)
 {
     r=-1;
     f=0;
 }
 }
 void dp()
 {
 int i;
 if(r==-1)
 {
     cout<<"\nEmpty queue";
     return;
 }
 cout<<"\nQueue is ";
 for(i=f;i<=r;i++)
    cout<<" "<<q1[i];
 }
 };
 int main()
 {
 q<int>w1;
 q<double>w2;
 int ch1=1,ch2=1,n;
 cout<<"1 for intger queue\n2 for float queue ";
 cin>>n;
 if(n==1)
 {
 while (ch1)
 {
 cout<<"\n\n1 to insert\n2 to delete\n3 to display\n0 to exit\n";
 cin>>ch1;
 switch(ch1)
 {
 case 1: w1.insert();
 break;
 case 2: w1.delet();
 break;
 case 3: w1.dp();
 break;
 }
 }
 }
 else
 {
  while (ch2)
 {
 cout<<"\n\n1 to insert\n2 to delete\n3 to display\n0 to exit\n";
 cin>>ch2;
 switch(ch2)
 {
 case 1:w2.insert();
 break;
 case 2:w2.delet();
 break;
 case 3:w2.dp();
 break;
 }
 }
 }
 return 0;
}
