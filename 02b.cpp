#include<iostream>
using namespace std;
class s
{
    int *a,n;
    public:
    void getdata()
    {
        cout<<"\nEnter number of elements ";
        cin>>n;
        cout<<"\nEnter elements ";
        a=new int[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
    }
   friend float mean(s S)
   {
       float avg=0;
       for(int i=0;i<S.n;i++)
        avg+=S.a[i];
       avg/=S.n;
       return avg;
   }
   void disp()
   {
       cout<<"\nElements are:\n";
       for(int i=0;i<n;i++)
            cout<<a[i]<<" ";
   }
};
main()
{
    s S;
    float f;
    S.getdata();
    f=mean(S);
    S.disp();
    cout<<"\nMean is "<<f;
    return 0;
}
