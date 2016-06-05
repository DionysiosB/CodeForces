#include<iostream>
using namespace std;
int main(void)
{
    int n;
    cin>>n;
    int a1,a2,b1,b2,c1,c2;
    cin>>a1>>a2>>b1>>b2>>c1>>c2;
    int ans1=0,ans2=0,ans3=0;
    ans1+=a1;
    ans2+=b1;
    ans3+=c1;
    n-=a1;
    n-=b1;
    n-=c1;
    a2-=a1;
    b2-=b1;
    c2-=c1;

    if(n!=0)
    {
        if(n>=a2)
        {
            n-=a2;
            ans1+=a2;
        }
        else
        {
            ans1+=n;
            n=0;
        }
    }
    if(n!=0)
    {
        if(n>=b2)
        {
            n-=b2;
            ans2+=b2;
        }
        else
        {
            ans2+=n;
            n=0;
        }
    }
    if(n!=0)
    {
        if(n>=c2)
        {
            n-=c2;
            ans3+=c2;
        }
        else
        {
            ans3+=n;
            n=0;
        }
    }
    cout<<ans1<<" "<<ans2<<" "<<ans3;
    return 0;
}