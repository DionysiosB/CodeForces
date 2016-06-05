#include<iostream>
using namespace std;
int arr[100001];
int main(void)
{
    int n,k;
    cin>>n>>k;
    for(int i=0;i<n;++i)
        cin>>arr[i];
    int ans=arr[n-1];
    int kaka=n;
    int pa=0;
    if(k>=n)
    {
        cout<<ans;
        return 0;
    }
    while(k<n)
    {
        k--;
        n-=2;
        pa++;
    }
    int l=pa*2-1;
    for(int i=0;i<=l/2;++i)
        ans=max(ans,arr[i]+arr[l-i]);
    for(int i=l+1;i<kaka;++i)
        ans=max(ans,arr[i]);
    cout<<ans;
    return 0;
}