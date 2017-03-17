#include<stdio.h>
int main(void)
{
    int i=1,ans,n,m;
    scanf("%d %d",&n,&m);
    ans=n;
    while(m*i<=ans)
    {
        ans++;
        i++;
    }

    printf("%d\n",ans);
    return 0;
}