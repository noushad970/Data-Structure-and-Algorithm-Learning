#include <iostream>
using namespace std;
void TOH(int n,int s,int t,int a){
    if(n==1){
        cout<<"Disk 1 move from : "<<s<<" to "<<t<<endl;
        return;
    }
    TOH(n-1,s,a,t);
    cout<<"Disk "<<n<<" move from : "<<s<<" to "<<t<<endl;
    TOH(n-1,a,t,s);
}
int main() {
   int n;
    cout << "Enter the number of disks: ";
    cin >> n;

    TOH(n, 'A'-64, 'C'-64, 'B'-64);
}