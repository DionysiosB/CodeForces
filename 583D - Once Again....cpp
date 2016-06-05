#include<iostream>
#include<vector>
#include<algorithm>
int arr[4000000];
using namespace std;
vector<int> v;
int lis(int n)
{
    v.clear();
    v.push_back(arr[0]);
    for(int i=1;i<n;++i)
    {
        if(arr[i]>=v.back())
            v.push_back(arr[i]);
        else
            *upper_bound(v.begin(),v.end(),arr[i])=arr[i];
    }
    return v.size();
}
int main(void)
{
    int n,t;
    cin>>n>>t;
    for(int i=0;i<n;++i)
        cin>>arr[i];
    if(t<10000)
    {
        for(int i=n;i<n*t;++i)
            arr[i]=arr[i-n];
        int ans=lis(n*t);
        cout<<ans;
    }
    else
    {
        for(int i=n;i<n*10000;++i)
            arr[i]=arr[i-n];
        int ans=lis(n*10000);
        int mx=0;
        int temp[301]={0};
        for(int i=0;i<n;++i)
            temp[arr[i]]++;
        for(int i=0;i<301;++i)
            mx=max(temp[i],mx);
        ans+=mx*(t-10000);
        cout<<ans;
    }
    return 0;
}