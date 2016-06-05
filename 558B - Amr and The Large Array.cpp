#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int arr[100001];
static int cnt[1000001];
int lef[1000001];
int righ[1000001];
int main(void)
{
    int n;
    cin>>n;
    for(int i=0;i<n;++i)
    {
        cin>>arr[i];
        cnt[arr[i]]++;
        if(cnt[arr[i]]==1)
        {
            lef[arr[i]]=i;
            righ[arr[i]]=i;
        }
        else
            righ[arr[i]]=i;
    }
    vector< pair<int,int> >vec;
    for(int i=1;i<=1000000;++i)
        if(cnt[i]>0)
            vec.push_back(make_pair(cnt[i],i));

    sort(vec.rbegin(),vec.rend());
    int flag=0;
    int prev;
    int ans_st,ans_en;
    int si,st,en;
    for(vector< pair<int,int> >::iterator it=vec.begin();it!=vec.end();++it)
    {
        if(flag==1)
        {
            if(it->first!=prev)
                break;
        }
        int ele=it->second;
        st=lef[ele];
        en=righ[ele];
        if(flag==1)
        {
            if(en-st+1<si)
            {
                si=en-st+1;
                ans_st=st;
                ans_en=en;
            }
        }
        else
        {
            si=en-st+1;
            ans_st=st;
            ans_en=en;
        }
        prev=it->first;
        flag=1;
    }
    cout<<ans_st+1<<" "<<ans_en+1;
    return 0;
}