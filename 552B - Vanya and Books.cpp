#include<iostream>
using namespace std;
int main(void)
{
    long long int n;
    cin>>n;
    long long int ans=0LL;
    long long int temp=9LL;
    long long int dig=1LL;
    while(n>0LL)
    {
        if((n-temp)<0LL)
        {
            ans+=n*dig;
            break;
        }
        else
        {
            ans+=temp*dig;
            n=n-temp;
            temp=temp*10LL;
        }
        ++dig;
    }
    cout<<ans;
    return 0;
}