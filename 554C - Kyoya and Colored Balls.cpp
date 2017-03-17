#include<iostream>
#include<cstdio>
#include<cstdlib>
#define MOD 1000000007
long long arr[1001][1001];
using namespace std;
void ini()
{
    arr[1][0]=arr[0][1]=arr[1][1]=1;
    for(int i=2;i<=1000;++i)
    {
        arr[i][0]=arr[i][i]=1;
        for(int j=1;j<i;++j)
        {
            arr[i][j]=arr[i-1][j]+arr[i-1][j-1];
            arr[i][j]%=MOD;
        }
    }
}
int main(void)
{
    long long int ans=1LL;
    int k;
    cin>>k;
    ini();
    int *sum=(int *)malloc(sizeof(int)*k);
    int tot=0;
    for(int i=0;i<k;++i)
    {
        cin>>sum[i];
        tot+=sum[i];
    }
    for(int i=k-1;i>0;--i)
    {
        ans=ans*arr[tot-1][sum[i]-1];
        ans=ans%MOD;
        tot-=sum[i];
    }
    free(sum);
    cout<<ans;
    return 0;
}