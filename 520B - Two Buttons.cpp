#include<cstdio>
#include<queue>
#include<climits>
int dis[10001];
using namespace std;
int main(void)
{
    int n,m;
    scanf("%d %d",&n,&m);
    if(n>=m)
    {
        printf("%d",n-m);
        return 0;
    }
    for(int i=0;i<10001;++i)
        dis[i]=INT_MAX;
    dis[n]=0;
    queue<int> Q;
    if(n>1)
    {
        Q.push(n-1);
        dis[n-1]=1;
    }
    Q.push(n*2);
    dis[n*2]=1;
    if(dis[m]!=INT_MAX)
    {
        printf("%d\n",dis[m]);
        return 0;
    }
    while(Q.empty()==false)
    {
        int node=Q.front();
        Q.pop();
        if(node*2<10001)
        {
            if(dis[node]+1<dis[node*2])
            {
                dis[node*2]=dis[node]+1;
                Q.push(node*2);
            }
        }
        if(node>1)
        {
            if(dis[node]+1<dis[node-1])
            {
                dis[node-1]=dis[node]+1;
                Q.push(node-1);
            }
        }
        if(dis[m]!=INT_MAX)
        {
            printf("%d",dis[m]);
            return 0;
        }
    }
    printf("%d",dis[m]);

    return 0;
}