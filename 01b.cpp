#include <iostream>
using namespace std;
class si
{
    public:
    float amount;
    float p;
    float r;
    float t;
    void interest(float p,float t=1,float r=12)
    {
    amount = (p*t*r)/100;
    cout<<"\nSimple interest for one year at 12% is: Rs."<<amount;
    }
};
int main()
{
 si S;
 cout<<"Enter princpal ";
 cin>>S.p;
 S.interest(S.p);
 return 0;
}
