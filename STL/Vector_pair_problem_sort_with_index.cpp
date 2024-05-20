#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter array size:" <<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter array's values: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    vector<pair<int,int>> ans;
    for(int i=0;i<n;i++)
    {
        ans.push_back(make_pair(arr[i],i));
    }
    sort(ans.begin(),ans.end());
    for(auto x:ans)
    {
        cout<<x.first<<" "<<x.second<<endl;
    }
}