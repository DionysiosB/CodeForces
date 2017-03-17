#include<cstdio>
#include<cstdlib>
#include<iostream>
#include<algorithm>
using namespace std;
int arr[10005];
long long int cumu[10005];
long long int dp[5005][5005]; //dp[i][j] stores maximum possible sum up till i as the last index and j number of segments
int main(void)
{
    int n,m,k;
    //freopen("in.txt","r",stdin);
    scanf("%d %d %d",&n,&m,&k);
    int i,j;
    for(i=0;i<n;++i)
        cin>>arr[i];
    cumu[0]=arr[0];
    for(i=1;i<n;++i)
        cumu[i]=cumu[i-1]+arr[i];
    for(i=0;i<n;++i)
        for(j=1;j<=k;++j)
            dp[i][j]=dp[i][j]=0LL;

    dp[0][0]=0LL;
    dp[0][1]=cumu[m-1];
    int c=0;
    for(i=1;i<n;++i)
    {
        c=(i+1)/m;
        for(j=1;j<=min(c,k);++j)
        {
            if(i-m<0)
            {
                dp[i][j]=max(cumu[i],0LL);
                continue;
            }
            else
            {
                dp[i][j]=max(cumu[i]-cumu[i-m]+dp[i-m][j-1],dp[i-1][j]);
            }
            //printf("i=%d and %d\n",i,dp[i][1][j]);
        }
    }
    cout<<dp[n-1][k];
    return 0;
}