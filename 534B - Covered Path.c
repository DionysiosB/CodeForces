#include<stdio.h>
#define min(a,b) ((a)<(b)?(a):(b))
int main(void)
{
    int v1,v2,t,d;
    scanf("%d %d",&v1,&v2);
    scanf("%d %d",&t,&d);
    int i;
    int dis[1000];
    dis[1]=v1;
    int ans=dis[1];
    dis[t]=v2;
    for(i=2;i<=t-1;++i)
    {
        dis[i]=min(dis[i-1]+d,v2+(t-i)*d);
        ans+=dis[i];
    }
    printf("%d\n",ans+v2);
    return 0;
}