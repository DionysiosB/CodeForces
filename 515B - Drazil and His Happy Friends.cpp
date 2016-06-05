#include<iostream>
using namespace std;
int main(void)
{
    int n,m;
    bool happy_boy[101]={false};
    bool happy_girl[101]={false};
    cin>>n>>m;
    int a;
    cin>>a;
    int i;
    while(a--)
    {
        cin>>i;
        happy_boy[i]=true;
    }
    int b;
    cin>>b;
    while(b--)
    {
        cin>>i;
        happy_girl[i]=true;
    }

    for(i=0;i<=100000;++i)
    {
        a=i%n;
        b=i%m;
        if(happy_boy[a]==true || happy_girl[b]==true)
        {
            //cout<<"happy "<<a<<" "<<b<<endl;
            happy_boy[a]=true;
            happy_girl[b]=true;
        }
    }
    int flag=1;
    for(i=0;i<n;++i)
    {
        if(happy_boy[i]==false)
        {
            flag=0;
            break;
        }
    }
    for(i=0;i<m;++i)
    {
        if(happy_girl[i]==false)
        {
            flag=0;
            break;
        }
    }
    if(flag==0)
        cout<<"No";
    else
        cout<<"Yes";
    return 0;
}