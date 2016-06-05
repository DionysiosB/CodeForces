#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(void)
{
    int n,d;
    cin>>n>>d;
    vector<pair<int,long long int>>v;
    for(int i=0;i<n;++i)
    {
        int amt,fac;
        cin>>amt>>fac;
        v.push_back(make_pair(amt,fac));
    }
    sort(v.begin(),v.end());
    int st=0,en=0;
    long long ans=0,temp=0;
    int lala=0;
    while(lala<n)
    {
        ans=max(ans,temp);
        if(v[lala].first<v[st].first+d)
        {
            en=lala;
            temp+=v[en].second;
            ++lala;
        }
        else
        {
            temp-=v[st].second;
            st++;
        }
    }
    ans=max(ans,temp);
    cout<<ans;
    return 0;
}