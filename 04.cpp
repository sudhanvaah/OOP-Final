#include<iostream>
#include<cstdlib>
using namespace std;
class matrix
{
public:
long m[5][5];
int row,col;
matrix(int col1,int row1)
{
    col=col1;
    row=row1;
}
matrix()
{

}
void getdata()
{
for(int i=0;i<row;i++)
     for(int j=0;j<col;j++)
          cin>>m[i][j];
}
int operator ==(matrix cm)
{
if(row==cm.row&&col==cm.col)
    return 1;
return 0;
}
matrix operator +(matrix am)
{
    matrix temp;
    for(int i=0;i<row;i++)
        for(int j=0;j<col;j++)
            temp.m[i][j]=m[i][j]+am.m[i][j];
    temp.row=row;
    temp.col=col;
    return temp;
}
matrix operator -(matrix am)
{
    matrix temp;
    for(int i=0;i<row;i++)
        for(int j=0;j<col;j++)
            temp.m[i][j]=m[i][j]-am.m[i][j];
    temp.row=row;
    temp.col=col;
    return temp;
}
friend ostream& operator<<(ostream& dout , matrix& d)
{
for(int i=0;i<d.row;i++)
{
    for(int j=0;j<d.col;j++)
        dout<<d.m[i][j]<<"\t";
    dout<<"\n";
}
}
};
int main()
{
matrix m3,m4;
int col1,row1,col2,row2;
cout<<"\nEnter order of matrix A "<<endl;
cin>>row1>>col1;
cout<<"\nEnter order of matrix B"<<endl;
cin>>row2>>col2;
matrix m1(col1,row1),m2(col2,row2);
if(!(m1==m2))
{
    cout<<"\nMatrices not compatible ";
    return -1;
}
    cout<<"\nEnter elements of A ";
    m1.getdata();
    cout<<"\nEnter elements of B ";
    m2.getdata();
    m3=m1+m2;
    m4=m1-m2;
    cout<<"\nA + B: \n\n";
    cout<<m3;
    cout<<"\nA - B:\n\n";
    cout<<m4;
return 0;
}
