#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(void)
{
    ll n,m;
    cin>>n>>m;
    ll pd,ph;
    ll cd,ch;
    bool err = false;
    cin>>pd>>ph;
    ll h1=ph+pd-1;
    ll mx=h1;
    for (ll mem=1;mem<m;mem++)
    {
        cin>>cd>>ch;
        ll dist=abs(ch-ph);
        ll days=cd-pd;
        if (days<dist)
            err=true;
        else
        {
            days-=dist;
            ll hmx=max(ch, ph);
            mx=max(mx, hmx + days / 2);
        }
        pd=cd;
        ph=ch;
    }
    ll hn=ph+n-pd;
    mx=max(hn,mx);
    if(err)
        cout<<"IMPOSSIBLE"<<endl;
    else
        cout<<mx<<endl;
    return 0;
}