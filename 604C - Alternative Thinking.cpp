#include<iostream>
using namespace std;
int dp[100001][2][3];
int main(void)
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    if(s[0]=='0')
        dp[1][0][0]=dp[1][1][1]=1;
    else
        dp[1][0][1]=dp[1][1][0]=1;
    for(int i=2;i<=s.size();++i)
    {
        if(s[i-1]=='1')
        {
            dp[i][0][0]=dp[i-1][0][0];
            dp[i][1][0]=max(dp[i-1][0][0]+1,dp[i-1][1][0]);
            dp[i][0][1]=max(dp[i-1][1][0]+1,dp[i-1][1][1]+1);
            dp[i][0][2]=max(dp[i-1][0][1],dp[i-1][0][2]);
            dp[i][1][2]=max(dp[i-1][1][1],max(dp[i-1][1][2],max(dp[i-1][0][1]+1,dp[i-1][0][2]+1)));
        }
        else
        {
            dp[i][0][0]=max(dp[i-1][0][0],dp[i-1][1][0]+1);
            dp[i][1][0]=dp[i-1][1][0];
            dp[i][1][1]=max(dp[i-1][0][0]+1,dp[i-1][0][1]+1);
            dp[i][1][2]=max(dp[i-1][1][2],dp[i-1][1][1]);
            dp[i][0][2]=max(dp[i-1][1][1]+1,max(dp[i-1][1][2]+1,max(dp[i-1][0][2],dp[i-1][0][1])));
        }
    }
    cout<<max(dp[s.size()][0][1],max(dp[s.size()][1][1],max(dp[s.size()][0][2],dp[s.size()][1][2])));
    return 0;
}