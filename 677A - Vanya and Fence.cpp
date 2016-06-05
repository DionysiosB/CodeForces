#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int n,h;
    cin>>n>>h;
    int ans=0,temp;
    for(int i=0;i<n;++i)
    {
        cin>>temp;
        if(temp>h)
            ans++;
        ans++;
    }
    cout<<ans<<endl;
    return 0;
}