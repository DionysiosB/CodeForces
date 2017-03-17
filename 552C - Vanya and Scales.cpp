#include<iostream>
using namespace std;
int main(void)
{
    int w,m;
    cin>>w>>m;
    int flag=0;
    for(int i=1;i<=100;++i)
    {
        if(m%w==1)
            --m;
        else if(m%w==w-1)
            ++m;
        else if(m%w)
        {
            flag=1;
            break;
        }
        m=m/w;
    }
    if(m!=0 || flag==1)
        cout<<"NO";
    else
        cout<<"YES";
    return 0;
}