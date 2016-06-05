#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int n,h,k;
    cin>>n>>h>>k;
    long long int temp,ans=0,curr=0;
    for(int i=0;i<n;++i)
    {
        cin>>temp;
        if(curr+temp<=h)
        {
            curr=curr+temp;
        }
        else
        {
            /*while(curr+temp>h)
            {
                curr=curr-k;
                if(curr<0)
                    curr=0;
                ++ans;
            }*/
            long long int kaka=(curr+temp-h)/k;
            if((curr+temp-h)%k)
                ++kaka;
            ans=ans+kaka;
            curr=curr-k*kaka;
            if(curr<0)
                curr=0;
            curr=curr+temp;

        }
    }
    if(curr>0)
    {
        ans=ans+curr/k;
        if(curr%k)
            ++ans;
    }
    cout<<ans;
    return 0;
}