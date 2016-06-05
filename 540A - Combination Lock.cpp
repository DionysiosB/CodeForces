#include<stdio.h>
#define min(a,b) ((a)<(b)?(a):(b))
char a[2000];
char b[2000];
int main(void)
{
    int n;
    scanf("%d",&n);
    scanf("%s %s",a,b);
    int i,ans=0;
    for(i=0;i<n;++i)
    {
        if(a[i]>b[i])
        {
            ans+=min(a[i]-b[i],10-a[i]+b[i]);
        }
        else
        {
            ans+=min(b[i]-a[i],a[i]+10-b[i]);
        }
    }
    printf("%d\n",ans);

    return 0;
}