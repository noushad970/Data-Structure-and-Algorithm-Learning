#include <iostream>
using namespace std;
void loop(int t)
{
 if(t<=0)
   return;
    //code here
    //Print here
    loop(t-=1);
}
int main() {
    int t;
    cin>>t;
    loop(t);
    return 0;
}