#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<vector>
bool *cat,*vis;
int m,ans=0;
using namespace std;
vector<vector<int>>adj;
void dfs(int node,int curr,bool is_cat,int prev)
{
    if(vis[node]==true)
        return;
    vis[node]=true;
    if(curr>m)
    {
        return;
    }

    if(adj[node].size()==1 && vis[adj[node][0]]==true)
    {
        ++ans;
        return;
    }
    for(int i=0;i<adj[node].size();++i)
    {
        int cu=adj[node][i];
        if(is_cat==true)
        {

            if(cat[cu]==true)
                dfs(cu,curr+1,true,node);
            else
                dfs(cu,0,false,node);
        }
        else
        {
            if(cat[cu]==true)
                dfs(cu,1,true,node);
            else
                dfs(cu,0,false,node);
        }
    }
}
int main(void)
{
    //freopen("in.txt","r",stdin);
    int n;
    cin>>n>>m;
    adj.resize(n+1);
    cat=(bool *)calloc(sizeof(bool),n+1);
    vis=(bool *)calloc(sizeof(bool),n+1);
    for(int i=0;i<n;++i)
    {
        int temp;
        cin>>temp;
        if(temp==1)
            cat[i+1]=true;
    }
    for(int i=0;i<n-1;++i)
    {
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    if(cat[1]==true)
        dfs(1,1,true,-1);
    else
        dfs(1,0,false,-1);
    adj.clear();
    free(cat);
    cout<<ans;
    return 0;
}