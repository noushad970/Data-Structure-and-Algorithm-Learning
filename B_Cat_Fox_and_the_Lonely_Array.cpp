#include<bits/stdc++.h>
using namespace std;

int solve(int arr[],int &n,int &index)
{
    int ans=0;
    int recursiveAns;
    
    //int valueCount;
    int breakpoint1=0;
    int breakpoint2=0;
    int copyIndex=index;
    for(int i=index;i<n;i++)
    {
       // valueCount=0;
       bool allvis=false; 
      
      //  ++valueCount;
        breakpoint2=i;
        for(int j=index;j<i;j++)
        {
            ans=(arr[i]|arr[j]);
           // ++valueCount;
            
            breakpoint2=j;
        }
        recursiveAns=ans;
        cout<<"Recursive ans:"<<ans<<endl;
        int ansx=solve(arr,n,++index);
         if(ans==ansx)
         {
            cout<<"Index: "<<index<<endl;
            allvis=true;
            solve(arr,n,index);
            
         }
         else
         {
            allvis=false;
         }
         if(allvis)
         return recursiveAns;
         index=++copyIndex;
         if(breakpoint2==n-1 && breakpoint1==n-1)
         break;
         
    }
    return 0;
    
}

int main()
{
    int t;
    cin>>t;
    int ts=0;
    while (t--)
    {
        int n;
        cin>>n;
        int a[n];
        set<int>st;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            st.insert(a[i]);
        }
       // cout<<"TestCase: "<<++ts<<endl;
        int ind=0;
        int ans=0;
        if(st.size()==1)
        {
            ans=1;
            cout<<ans<<endl;
            cout<<"TestCase "<<ts<<endl;
        }else
        {
            cout<<solve(a,n,ind)<<endl;
            cout<<"TestCase "<<ts<<endl;
        }
        
    }
    
}

/*

void recursions(int arr[],int &n,int valueCount,bool &allvis,int &index)
{
    for(int i=++index;i<n;i++)
    {
       
        
    }
}

int solve(int arr[],int &n,int &index)
{
    int ans=0;
    bool allvis=true;
    int valueCount;
    for(int i=index;i<n;i++)
    {
        valueCount=0;
        cout<<"Bit value of: ";
        cout<<arr[i]<<" ";
        if(index>=n)
        return 0;
        ++valueCount;
        for(int j=index;j<i;j++)
        {
            ans=(arr[i]|arr[j]);
            cout<<arr[j]<<" ";
            ++valueCount;
        }
         cout<<" is: "<<ans<<endl;
         cout<<"Bitwise operation for : "<<valueCount<<" values."<<endl;
         if(ans!=solve(arr,n,++index))
         {
            allvis=false;
            break;
         }
         
    }
    return ans;
    cout<<"End Function"<<endl;
    cout<<endl<<endl;
}

*/