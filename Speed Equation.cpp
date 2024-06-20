#include<iostream>
#include<math.h>
#include <complex>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a;
        b=a;
        c=a+1;
        int fst,scd;
        fst=pow(b,c);
        scd=pow(a,b);
        cout<<fst<<" "<<scd<<endl;
        while(fst%a!=0 && scd%c!=0)
        {
            if(c/b==2 && c%b==0)
            {
                b*=2;
            }
            c++;
        }
        cout<<b<<" "<<c<<endl;
    }
}