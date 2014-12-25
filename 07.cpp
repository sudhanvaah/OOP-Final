#include<iostream>
#include <cmath>
#define PI 3.14
using namespace std;
class circle
{
public:
float r;
circle(float radius)
{
    r=radius;
}
float area()
{
    return (PI*r*r);
}
};
class sector:circle
{
float angle;
public:
sector(float ang, float rad) : circle(rad)
{
    angle=ang;
}
float area_sec()
{
    return (r*r*(angle/2.0));
}
};
class segment:public circle
{
float h;
public:
segment(float len, float rad) : circle(rad)
{
    h=len;
}
float area_seg()
{
return (r*r*((r-h)/r))-((r-h)*(sqrt((2*r*h)-(h*h))));

}
};
int main()
{
float r,a,l;
cout<<"Enter radius "<< endl;
cin>>r;
cout<<"Enter angle of sector in radians "<< endl;
cin>>a;
cout<<"Enter length of segment "<<endl;
cin>>l;
circle c(r);
cout<<"Area of circle is "<<c.area()<<endl;
sector s(a,r);
cout<<"Area of sector is "<<s.area_sec()<<endl;
segment se(l,r);
cout << "Area of segment is " << se.area_seg() << endl;
}
