#include <iostream>
#include <vector>
#include <cstdio>
#include <algorithm>
using namespace std;
int dp[1000001];
int main(void)
{
    //freopen("in.txt","r",stdin);
    vector< pair<int,int> >v;
    vector<int> temp;
    int n;
    cin>>n;
    for(int i=0;i<n;++i)
    {
        int a,b;
        cin>>a>>b;
        temp.push_back(a);
        v.push_back(make_pair(a,b));
    }
    
    sort(temp.begin(),temp.end());
    sort(v.begin(),v.end());
    dp[0]=1;

    for(int i=1;i<v.size();++i)
    {
        int will_destroy=v[i].first-v[i].second;
        if(will_destroy<1)
            dp[i]=1;
        else
        {
            int flag=0;
            vector<int> ::iterator it;
            it=lower_bound(temp.begin(),temp.end(),will_destroy);
        
            if(it==temp.begin())
            {
                flag=1;
                dp[i]=1;
            }
            else
            {
                --it;
            }
            
            if(flag==0)
            {
                int idx=it-temp.begin();
                dp[i]=1+dp[idx];
            }           
        }
    }
    temp.clear();
    v.clear();
    int ans=999999999;
    for(int i=0;i<n;++i)
    {
        //cout<<dp[i]<<endl;
        ans=min(ans,n-dp[i]);
    }
    cout<<ans;
    return 0;
}