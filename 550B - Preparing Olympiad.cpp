#include<iostream>
#include<algorithm>
int arr[16];
using namespace std;
int main(void)
{
    int n,l,r,x;
    cin>>n>>l>>r>>x;
    for(int i=0;i<n;++i)
        cin>>arr[i];
    sort(arr,arr+n);
    int lim=1<<n,ans=0;
    for(int i=1;i<lim;++i)
    {
        int sum=0;
        int temp[16],len=0;
        for(int j=0;j<n;++j)
        {
            if((i&(1<<j))>0)
            {
                temp[len++]=arr[j];
                sum+=arr[j];
            }
        }
        if(len>=2 && sum<=r && sum>=l && (temp[len-1]-temp[0])>=x)
            ++ans;
    }
    cout<<ans;
    return 0;
}