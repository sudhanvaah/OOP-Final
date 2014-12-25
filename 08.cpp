#include <iostream>
using namespace std;
class matrix
{
    int **a,ord;
    public:
    matrix(int n)
    {
       ord=n;
       a=new int*[n];
       for(int i=0;i<n;i++)
        a[i]=new int[n];
    }
    matrix(matrix&  M)
    {
        ord=M.ord;
        a=new int * [ord];
        for(int i=0;i<ord;i++)
         a[i]=new int[ord];
        for(int i=0;i<ord;i++)
            for(int j=0;j<ord;j++)
                a[i][j]=M.a[i][j];
    }
    void getdata()
    {

        for(int i=0;i<ord;i++)
            for(int j=0;j<ord;j++)
                cin>>a[i][j];
    }
    void disp()
    {
        for(int i=0;i<ord;i++)
        {
            cout<<"\n";
            for(int j=0;j<ord;j++)
                cout<<"\t"<<a[i][j];
        }
        cout<<"\n";
    }
    friend matrix operator *(matrix A, matrix B)
    {
        int o=A.ord;
        matrix  mult(o);
        for(int i=0;i<o;i++)
            for(int j=0;j<o;j++)
            {
                mult.a[i][j]=0;
                for(int k=0;k<o;k++)
                   mult.a[i][j]+=A.a[i][k]*B.a[k][j];
            }
        return mult;
    }
    friend matrix operator +(matrix A, matrix B)
    {
        int o=A.ord;
        matrix  mult(o);
        for(int i=0;i<o;i++)
            for(int j=0;j<o;j++)
            {
                   mult.a[i][j]=A.a[i][j]+B.a[i][j];
            }
        return mult;
    }
    matrix& operator=(const matrix& M)
    {
        ord=M.ord;
        a=new int*[ord];
        for(int i=0;i<ord;i++)
            a[i]=new int[ord];
        for(int i=0;i<ord;i++)
            for(int j=0;j<ord;j++)
                a[i][j]=M.a[i][j];
            //return *this;
    }
    ~matrix()
    {
        delete a;
        cout<<"\nObject deleted ";
    }

};
main()
{
    int n;
    cout<<"\nEnter size of square matrices ";
    cin>>n;
    matrix A(n),B(n);
    cout<<"\nEnter elements of matrix A ";
    A.getdata();
    cout<<"\nEnter elements of matrix B ";
    B.getdata();
    cout<<"\n\tMatrix A:\n";
    A.disp();
    cout<<"\n\tMatrix B:\n";
    B.disp();
    matrix C(A);
    cout<<"\n\tCopied matrix (C=A):\n";
    C.disp();
    C=A+B;
    cout<<"\n\n\tA + B:\n";
    C.disp();
    C=A*B;
    cout<<"\n\n\tA x B:\n";
    C.disp();
    return 0;
}
