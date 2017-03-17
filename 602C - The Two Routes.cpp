#include<iostream>
#include<queue>
#include<vector>
#include<cstdio>
int conn[401][401];
using namespace std;
vector< vector<int> >g;
int dis[401];
void func()
{
    dis[1]=0;
    queue<int> Q;
    Q.push(1);
    while(Q.empty()==false)
    {
        int top=Q.front();
        Q.pop();
        for(int i=0;i<g[top].size();++i)
        {
            int node=g[top][i];
            if(dis[top]+1<dis[node])
            {
                dis[node]=dis[top]+1;
                Q.push(node);
            }
        }
    }
}
int main(void)
{
    //freopen("in.txt","r",stdin);
    int n,m;
    cin>>n>>m;
    g.resize(n+1);
    bool flag=false;
    while(m--)
    {
        int a,b;
        cin>>a>>b;
        conn[a][b]=conn[b][a]=true;
        if(conn[1][n]==true)
            flag=true;
    }
    if(flag==true)
    {
        for(int i=1;i<=n;++i)
            for(int j=1;j<=n;++j)
                if(i!=j)
                    if(conn[i][j]==false)
                    {
                        g[i].push_back(j);
                        g[j].push_back(i);
                    }
    }
    else
    {
        for(int i=1;i<=n;++i)
            for(int j=1;j<=n;++j)
                if(i!=j)
                    if(conn[i][j]==true)
                    {
                        g[i].push_back(j);
                        g[j].push_back(i);
                    }
    }
    for(int i=1;i<=n;++i)
        dis[i]=1e8;
    func();
    g.clear();
    if(dis[n]==1e8)
        cout<<"-1";
    else
        cout<<dis[n];
    return 0;
}