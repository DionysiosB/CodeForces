#include <iostream>
#include <vector>
#include <cstdio>
#include <iomanip>
double arr[100000];
using namespace std;
int main(void)
{
 //   freopen("in.txt","r",stdin);
    
    vector< pair<double,double> >ip;
    vector<double> op;
    int n,p;
    cin>>n>>p;
    for(int i=0;i<=n-1;++i)
    {
        int l,r;
        cin>>l>>r;
        ip.push_back(make_pair(l,r));
        int ll=-1,rr=-1;

        if(l%p!=0)
        {
            int temp=l/p+1;
            temp=temp*p;
            if(temp<=r)
                ll=temp;
        }
        else
            ll=l;
        if(r%p!=0)
        {
            int temp=r/p;
            temp=temp*p;
            if(temp>=l)
                rr=temp;
        }
        else
            rr=r;
        if(ll==-1 && rr==-1)
            op.push_back(0);
        else
            op.push_back((rr-ll)/p+1);        

    }
    double ans=0.0;
  
    for(int i=0;i<=n-1;++i)
    {
           
        if(i!=n-1)
            ans += op[i]/(ip[i].second-ip[i].first+1) + op[i+1]/(ip[i+1].second-ip[i+1].first+1) - op[i]*op[i+1]/((ip[i+1].second-ip[i+1].first+1)*(ip[i].second-ip[i].first+1));
        else
            ans += op[i]/(ip[i].second-ip[i].first+1) + op[0]/(ip[0].second-ip[0].first+1) - op[i]*op[0]/((ip[0].second-ip[0].first+1)*(ip[i].second-ip[i].first+1));
    }
    printf("%.6lf",ans*2000);
    
    return 0;
}