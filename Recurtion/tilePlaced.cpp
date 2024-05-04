#include<iostream>
using namespace std;
int tilePlaced(int n)
{
    if(n==0)
    return 0;
    if(n==1)
    return 1;
    return tilePlaced(n-1)+tilePlaced(n-2);
}
int main()
{
    
}