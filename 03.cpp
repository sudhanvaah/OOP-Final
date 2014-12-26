#include<iostream>
using namespace std;
class rectangle
{
    public:
    int l,b;
    void getdata()
    {
        cin>>l>>b;
    }
    rectangle operator +(rectangle R)
    {
        rectangle r;
        r.l=l+R.l;
        r.b=b+R.b;
        return r;
    }
    rectangle operator - ()
    {
        cout<<"\nArea: "<<l*b<<" square units";
        cout<<"\nPerimeter: "<<2*(l+b)<<" units";
    }
    friend ostream & operator <<(ostream & dout,rectangle r)
    {
        dout<<r.l<<" "<<r.b;
    }
    int operator ==(rectangle r)
    {
        if(r.l==l && r.b==b)
            return 1;
        return 0;
    }
};
main()
{
    rectangle a,b,c;
    cout<<"\nEnter length and breadth of first rectangle ";
    a.getdata();
    -a;
    cout<<"\n\nEnter length and breadth of second rectangle ";
    b.getdata();
    -b;
    if(a==b)
        cout<<"\n\nRectangles are equal ";
    else
        cout<<"\n\nRectangles are not equal ";
    c=a+b;
    cout<<"\n\nSum of the two rectangles: ";
    cout<<c;
    -c;
    return 0;
}
