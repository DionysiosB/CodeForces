#include <iostream>
#include <cstdio>
using namespace std;
int main(void)
{
 //   freopen("in.txt","r",stdin);
    long long int n,a,b,c;
    cin>>n>>a>>b>>c;
    long long ans1=0,ans2=0;
    ans1+=n/a;
    long long left=n%a;
    if(left>=b)
    {
        ans1+=(left-b)/(b-c)+1;
    }
    if(n>=b)
    {
        ans2+=(n-b)/(b-c)+1;
        n=(n-b)%(b-c)+c;
    }
    if(n>=a)
        ans2+=n/a;
    //cout<<ans1<<" "<<ans2<<endl;
    cout<<max(ans1,ans2);
    return 0;
}