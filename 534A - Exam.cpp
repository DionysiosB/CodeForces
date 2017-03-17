#include<stdio.h>
int main(void)
{
    int n;
    scanf("%d",&n);
    if(n==1 || n==2)
    {
        printf("1\n");
        printf("1\n");
    }
    else if(n==3)
    {
        printf("2\n");
        printf("1 3\n");
    }
    else if(n==4)
    {
        printf("4\n");
        printf("2 4 1 3");
    }
    else
    {
        printf("%d\n",n);
        int i;
        for(i=1;i<=n;i+=2)
            printf("%d ",i);
        for(i=2;i<=n;i+=2)
            printf("%d ",i);
    }
    return 0;
}