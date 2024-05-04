#include<iostream>
using namespace std;
int main(){
    int n=9;
    int * ptr=&n;
    cout<<n<<endl;
    cout<<(&n)<<endl;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    int *x=ptr;
    cout<<x<<endl;
    cout<<*x<<endl;

}