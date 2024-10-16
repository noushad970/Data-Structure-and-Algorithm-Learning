#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
void loop(long long int t)
{
 if(t<=0)
   return;
    long long int n,q;
    cin>>n>>q;
    string s[n];
    long long int a[q];
    for(long long int i=0;i<n;i++){
        cin>>s[i];
    }
    for(long long int i=0;i<q;i++){
        cin>>a[i];
    }
    int val=0,max1=1,max2=1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++){
            if(s[i].length()==s[j].length() && i!=j)
            max1++;
        }
        if(max1>=max2){
            val=s[i].length();
            max2=max1;
            max1=1;
        }
    }
    for(int i=0;i<q;i++)
    {
        cout<<val-(a[i]+1)<<endl;
    }
    
}
int main() {
    long long int t;
    cin>>t;
    loop(t);
    return 0;
}
/*
long long int suffix[n];
    for(long long int i=0;i<q;i++){
        
         int max1=1,max2=1;
        for(long long int j=0;j<n;j++){
            suffix[j]=s[j].length()-(a[i]+1);
            
        }
        int val=0;
        for(long long int j=0;j<n;j++){
            for(long long int k=0;k<n;k++){
                
                if(suffix[j]==suffix[k] && j!=k)
                {
                    max1++;
                }
            }
            if(max1>=max2)
            {
                max2=max1;
                val=suffix[j];
                max1=1;
            }
        }
        cout<<val;
         cout<<endl;

    }

    loop(t-=1);
*/