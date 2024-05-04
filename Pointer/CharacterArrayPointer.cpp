#include<iostream>
using namespace std;

int main()
{
    char ch[10]="ABCDEF";
    char *ptr=&ch[0];
    cout<<ptr;
}