#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(void)
{
    int n,k;
    cin>>n>>k;
    vector<pair<int,int>> v;
    for(int i=0;i<n;++i)
    {
        int temp;
        cin>>temp;
        v.push_back(make_pair(temp%10,temp));
    }
    sort(v.rbegin(),v.rend());
    int flag=0;
    while(flag==0)
    {
        int cnt=0;
        for(int i=0;i<n;++i)
        {
            int a=v[i].first;
            int b=v[i].second;
            if(b==100)
            {
                cnt++;
                continue;
            }
            if(k>=(10-a))
            {
                v[i].second+=10-a;
                k-=(10-a);
                v[i].first=0;
            }
            else
            {
                flag=2;
                break;
            }
        }
        if(cnt==n)
            flag=1;
    }
    int ans=0;
    for(int i=0;i<n;++i)
        ans+=(v[i].second)/10;
    cout<<ans;
    return 0;
}