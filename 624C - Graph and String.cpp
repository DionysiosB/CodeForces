#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
bool isConnected[501][501];
char fin[501];
int main(void)
{
    //freopen("in.txt","r",stdin);
    int n;
    cin>>n;
    int m;
    cin>>m;
    while(m--)
    {
        int a,b;
        cin>>a>>b;
        isConnected[a][b]=true;
        isConnected[b][a]=true;
    }
    for(int i=1;i<=n;++i)
        fin[i]='d';
    for(int i=1;i<=n;++i)
    {
        bool markItB=true;
        if(fin[i]!='d')
            continue;
        for(int j=1;j<=n;++j)
        {
            if(i==j)
                continue;
            if(isConnected[i][j]==false)
            {
                markItB=false;
                break;
            }
        }
        if(markItB==true)
        {
          //  cout<<"here"<<i<<endl;
            fin[i]='b';
        }
    }
    for(int i=1;i<=n;++i)
    {
        if(fin[i]!='d')
            continue;

        fin[i]='a';
        for(int j=1;j<=n;++j)
        {
            if(i==j)
                continue;
            if(fin[j]!='d')
                continue;
            if(isConnected[i][j]==false)
            {
                fin[j]='c';
            }
        }
    }

    //check correctness
    bool correct=true;
    for(int i=1;i<=n;++i)
    {
        for(int j=i+1;j<=n;++j)
        {
            int x=fin[i];
            int y=fin[j];
            if(x=='d' || y=='d')
                cout<<"Error\n";
            if(isConnected[i][j]==true && abs(x-y)>1)
            {
                correct=false;
                break;
            }
            else if(isConnected[i][j]==false && abs(x-y)<=1)
            {
                correct=false;
                break;
            }
        }
    }
    if(correct==false)
        cout<<"No";
    else
    {
        cout<<"Yes\n";
        for(int i=1;i<=n;++i)
            cout<<fin[i];
    }

    return 0;
}