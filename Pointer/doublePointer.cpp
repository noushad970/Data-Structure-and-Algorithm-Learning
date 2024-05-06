#include<iostream>
using namespace std;
void update(int **p2)
{
    cout<<"Inside function: "<<&p2<<endl;
}
int main()
{
    int i=4;
    int *p=&i;
    int **p2=&p;
    cout<<"Value of i: "<<i<<endl;
    cout<<"Value of p: "<<p<<endl;
    cout<<"Value of p2: "<<p2<<endl;
    cout<<endl;
    cout<<"Address of i: "<<&i<<endl;
    cout<<"Address of p: "<<&p<<endl;
    cout<<"Address of p2: "<<&p2<<endl;
    cout<<endl;
    cout<<"value of address p: "<<*p<<endl;
    cout<<"value of address p2: "<<*p2<<endl;
    cout<<endl;
    cout<<"value of address p from p2 to p: "<<**p2<<endl;
    cout<<endl;
    update(p2);
}