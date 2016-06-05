#include<iostream>
#include<cstdio>
#include<vector>
#define DEBUG 0
using namespace std;
int pl[10000],mi[10000];
int main(void)
{
    if(DEBUG)
        freopen("in.txt","r",stdin);
    int x,y,n;
    cin>>n;
    for(int i=0;i<n;++i)
    {
        cin>>x>>y;
        pl[x+y]++;
        mi[x-y+1000]++;
    }
    long long ans=0;
    for(int i=0;i<10000;++i)
    {
        if(pl[i]>1)
            ans+=(pl[i]*(pl[i]-1))/2;
        if(mi[i]>1)
            ans+=(mi[i]*(mi[i]-1))/2;
    }
    cout<<ans;

    return 0;
}