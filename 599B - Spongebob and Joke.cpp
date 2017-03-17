#include <iostream>
using namespace std;
int f[100001],b[100001],ans[100001],kaka[100001];
int main(void)
{
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;++i)
    {
        int temp;
        cin>>temp;
        f[temp]++;
        kaka[temp]=i+1;
    }
    for(int i=0;i<m;++i)
        cin>>b[i];
    int flag=0;
    for(int i=0;i<m;++i)
    {
        if(f[b[i]]>1)
        {
            flag=1;
        }
        if(f[b[i]]==0)
        {
            flag=2;
            break;
        }
        ans[i]=kaka[b[i]];
    }
    if(flag==1)
        cout<<"Ambiguity";
    else if(flag==2)
        cout<<"Impossible";
    else
    {
        cout<<"Possible\n";
        for(int i=0;i<m;++i)
            cout<<ans[i]<<" ";
    }

    return 0;
}