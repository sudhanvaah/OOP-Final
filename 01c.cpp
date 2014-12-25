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

 cout<<"enter name\n";





 cin>>name;


 cout<<"enter height\n",

 cin>>height;

 cout<<"enter weight\n";

 cin>>weight;

 cout<<"enter roll\n";

 cin>>roll;

}

void student::display()

{

 cout<<"\nname :"<<name;

 cout<<"\nheight :"<<height;

 cout<<"\nweight :"<<weight;

 cout<<"\nroll :"<<roll;

}

void arrange(student s[5])

{

 int i,j;

 student temp;

 for(i=0;i<5;i++)

{

 for(j=0;j<4;j++)

{

 if(s[j+1].height<s[j].height)

{

 temp=s[j+1];

 s[j+1]=s[j];

 s[j]=temp;

 }

 }

 }

}

int main()

{

int i;

 cout<<"enter details of 5 students";

for(i=0;i<5;i++)

{

 cout<<"enter details of student "<<i+1<<"\n";

 s[i].getdata();

}

for(i=0;i<5;i++)

{

 cout<<"details of student\n";

}

 arrange(s);

 cout<<"after sorting to based on height";

 for(i=0;i<5;i++)

 s[i].display();

 return 0;

}
