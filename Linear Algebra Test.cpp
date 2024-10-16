#include <iostream>
using namespace std;

int main() {
    long long int t;
    scanf("%lld",&t);
    while (t--)
    {
    long long int n;
    scanf("%lld",&n);
   long long int a[n][2];
   long long int ans=0;
    for( int i=0;i<n;i++){
        for(int j=0;j<2;j++)
        {
            cin>>a[i][j];
        }
    }
    
    for( int i=0;i<n;i++){
        for(int j=0;j<n;j++)
        {
            if(i!=j && a[j][1]==a[i][0])
            ans++;

        }
    }
    
    printf("%lld",ans);
    }
    
}