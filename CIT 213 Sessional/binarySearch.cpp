#include <iostream>
using namespace std;

int main() {
    int a[]={1,2,3,4,5,6,7,8,10,22,34,66};
    int mid,first,last,val=5;
    first=0;
    last=sizeof(a)/sizeof(a[0]);
    mid=last/2;
    int x=0;
    while (first<=last)
    {
        if(a[mid]==val){
            cout<<"Value Founded in mid:"<<mid<<endl;
            break;
        }
        if(a[mid]>val){
            first=mid+1;
            last=last;
            mid=(first+last)/2;
            cout<<"Not founded in second case"<<endl;
        }
        else if(a[mid]<val){
            first=first;
            last=mid-1;
            mid=(first+last)/2;
            cout<<"Not founded in third case"<<endl;
        }
        x++;
    }
    cout<<endl<<x;
    
}