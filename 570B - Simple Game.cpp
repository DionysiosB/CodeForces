#include<iostream>
using namespace std;
int main(void)
{
    int n,m;
    cin>>n>>m;
    if(n==1)
    {
        cout<<1;
        return 0;
    }
    int l,r;
    l=m-2;
    r=n-m-1;
    if(l>=r)
        cout<<m-1;
    else
        cout<<m+1;
    return 0;
}