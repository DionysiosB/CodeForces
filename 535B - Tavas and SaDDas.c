#include<stdio.h>
int main(void)
{
    int n;
    long long int idx;
    scanf("%d",&n);
    if(n%10==4)
        idx=1;
    else
        idx=2;
    n=n/10;
    long long int kaka=2LL;
    while(n)
    {
        if(n%10==4)
            idx+=kaka;
        else
            idx+=kaka*2;
        kaka=kaka*2LL;
        n=n/10;
    }
    printf("%I64d\n",idx);
    return 0;
}