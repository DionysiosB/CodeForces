#include<iostream>
using namespace std;
int main(void)
{
    int n;
    cin>>n;
    int f,l;
    for(int i=0;i<n;++i)
    {
        int temp;
        cin>>temp;
        if(temp==1)
            f=i;
        else if(temp==n)
            l=i;
    }
    int ans=-1;
    if(l==0 || l==n-1 || f==0 || f==n-1)
    {
        cout<<n-1;
    }
    else
    {
        cout<<max(n-1-f,max(n-1-l,max(l,f)));
    }
    return 0;
}