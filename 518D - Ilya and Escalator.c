#include<stdio.h>
double dp[3000][3000];
int main(void)
{
    double p;
    int n,t;
    scanf("%d %lf %d",&n,&p,&t);
    int i,j;
    for(i=0;i<=t;++i)
    {
        for(j=0;j<=n;++j)
        {
            dp[i][j]=0.0;
        }
    }
    //dp[i][j] stores total probability of j people on escalator till ith time.
    dp[0][0]=1;
    for(i=1;i<=t;++i)
    {
        dp[i][0]=dp[i-1][0]*(1-p);
    }
    for(i=1;i<=t;++i)
    {
        for(j=1;j<=n;++j)
        {
            dp[i][j]+=dp[i-1][j-1]*p;
            if(j==n)
                dp[i][j]+=dp[i-1][j];
            else
                dp[i][j]+=dp[i-1][j]*(1-p); //calculating probablity
        }
    }
    
    double ans=0.0;
    for(j=1;j<=n;++j)
        ans+=(double)j*dp[t][j];  //calculating expectation
    printf("%lf",ans);
    return 0;
}