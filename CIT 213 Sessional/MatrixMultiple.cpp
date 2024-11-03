#include <iostream>
using namespace std;

int main() {
    
    int r1,r2,c1,c2;
    cout<<"Enter first matrix row number:"<<endl;
    cin>>r1;
    cout<<"Enter first matrix column number:"<<endl;
    cin>>c1;
    cout<<"Enter second matrix row number:"<<endl;
    cin>>r2;
    cout<<"Enter second matrix column number:"<<endl;
    cin>>c2;
    int a[r1][c1];
    int b[r2][c2];
    int ans[r1][c1];
    
    if(r1!=r2 && c1!=c2)
    {
        cout<<"Size not valid!"<<endl;
        return 0;
    }
    cout<<"For First matrix:"<<endl;
    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c1; ++j) {
            cout << "Enter element at position [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> a[i][j];
        }
    }
    cout<<"For Second matrix:"<<endl;
    for (int i = 0; i < r2; ++i) {
        for (int j = 0; j < c2; ++j) {
            cout << "Enter element at position [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> b[i][j];
        }
    }
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
           ans[i][j]=0;
        }
        
    }
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            for(int k=0;k<c1;k++){
                ans[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}