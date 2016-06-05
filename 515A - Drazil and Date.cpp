#include<iostream>
#include<cstdlib>
using namespace std;
int main(void)
{
    int a,b,s;
    cin>>a>>b>>s;
    int temp=abs(a)+abs(b);
    if(temp>s)
    {
        cout<<"No";
        return 0;
    }
    s=s-temp;
    if(s%2)
        cout<<"No";
    else
        cout<<"Yes";
    return 0;
}