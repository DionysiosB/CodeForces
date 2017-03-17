#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(void)
{
    int n,vote;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;++i)
    {
        int temp;
        cin>>temp;
        if(i==0)
            vote=temp;
        else
            v.push_back(temp);
    }
    sort(v.begin(),v.end());
    int ans=0;
    while(v[v.size()-1]>=vote)
    {
        v[v.size()-1]--;
        vote++;
        ans++;
        sort(v.begin(),v.end());
    }
    v.clear();
    cout<<ans;
    return 0;
}