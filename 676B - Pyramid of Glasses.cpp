#include<iostream>
using namespace std;
int main(void)
{
    bool full[60]={false};
    int n,t;
    cin>>n>>t;
    double amt[60]={0.00};
    for(int i=0;i<t;++i)
    {
        int node=1;
        for(int level=1;level<=n;++level)
        {
            int ctr=0;
            while(ctr<level)
            {
                if(level==1)
                {
                    if(amt[node]==1)
                    {
                        amt[node+level]+=0.5;
                        amt[node+level+1]+=0.5;
                    }
                    else
                        amt[node]=1.00;
                }
                else
                {
                    if(amt[node]>1 && level<n)
                    {
                        double extra=amt[node]-1;
                        amt[node]=1.00;
                        amt[node+level+1]+=extra/2.0;
                        amt[node+level]+=extra/2.0;
                    }
                }
                ++node;
                ++ctr;
            }
        }
    }
    int ans=0;
    int lastnode=n*(n+1);

    for(int i=1;i<=lastnode/2;++i)
    {
        if(amt[i]>=1)
        {
            ++ans;
        }
    }
    cout<<ans;
    return 0;
}