#include<iostream>
#define m 1000000007
long long pow(long long base,long long exp)
{
    long long res=1LL;
    while(exp)
    {
        if(exp%2)
            res=(res*base)%m;
        base=(base*base)%m;
        exp=exp/2;
    }
    return res%m;
}
using namespace std;
int main(void)
{
    long long int n;
    cin>>n;
    long long ans=pow(3LL,3*n)-pow(7LL,n)+m;
    cout<<ans%m;
    return 0;
}