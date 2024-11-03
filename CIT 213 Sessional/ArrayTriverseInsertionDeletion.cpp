#include<iostream>
using namespace std;
void triverse(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
//1 2 3 _ 4 5 6
void insertion(int arr[],int n,int index,int val){
    int newArr[n+1];
    int size=sizeof(newArr)/sizeof(newArr[0]);
   // bool inserted=false;
    int j=0;
    for(int i=0;i<n+1;i++){
        if(i==index){
            newArr[i]=val;
           // inserted=true;
            //i++;
            continue;
        }
        newArr[i]=arr[j];//1 2 3 4
        j++;
    }
    triverse(newArr,size);
}
int main(){
    
    int arr[8]={1,2,3,4,5,6,7,8};
    int size=sizeof(arr)/sizeof(arr[0]);
   // triverse(arr,size);
    insertion(arr,size,4,100);
}