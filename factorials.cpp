#include <iostream>
using namespace std;
void fact(int first,int second,int n,int count,int sum)
{
     
    if(n-2==count){
        
    cout<<"Sum: "<<sum<<endl;
    return;
    }
    count++;
   
    cout<<first+second<<endl;
    sum+=(first+second);
    int temp=first;
    first=second;
    second=temp+second;
    fact(first,second,n,count,sum);
    
}
int main() {
    cout<<"0"<<endl<<"1"<<endl;
    int sum=0;
    fact(0,1,10,0,sum);
}