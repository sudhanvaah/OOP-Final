#include<iostream>
using namespace std;
struct student
{
 char name[10];
 float roll;
 float height;
 float weight;
 void display();
 void getdata();
}s[5];
void student::getdata()
{
 cout<<"\nEnter name ";
 cin>>name;
 cout<<"\nEnter height ",
 cin>>height;
 cout<<"\nEnter weight ";
 cin>>weight;
 cout<<"\nEnter roll ";
 cin>>roll;
}
void student::display()
{
 cout<<"\nMame: "<<name;
 cout<<"\nHeight: "<<height;
 cout<<"\nWeight: "<<weight;
 cout<<"\nRoll: "<<roll;
}
void arrange(student s[5])
{
 int i,j;
 student temp;
 for(i=0;i<5;i++)
    for(j=0;j<4;j++)
        if(s[j+1].height<s[j].height)
        {
         temp=s[j+1];
         s[j+1]=s[j];
         s[j]=temp;
        }
}
int main()
{
int i;
 cout<<"Enter details of 5 students\n";
for(i=0;i<5;i++)
{
 cout<<"\nEnter details of student "<<i+1<<"\n";
 s[i].getdata();
}
 arrange(s);
 cout<<"\n\nAfter sorting to based on height";
 for(i=0;i<5;i++)
 s[i].display();
 return 0;
}
