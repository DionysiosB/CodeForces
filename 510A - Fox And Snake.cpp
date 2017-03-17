#include<stdio.h>
int main(void)
{
    int n,m;
    scanf("%d %d",&n,&m);
    int i,j;
    char arr[n+1][m+1];
    for(i=0;i<n;++i)
        for(j=0;j<m;++j)
        arr[i][j]='.';
    int k,l;
    k=0,l=1;
    int temp=0;
    while(k<n)
    {
        for(i=0;i<m;++i)
        {
            arr[k][i]='#';
        }
        if(temp%2==0)
            arr[k+1][m-1]='#';
        else
            arr[k+1][0]='#';
        k+=2;
        temp++;
        l+=2;
    }
    for(i=0;i<n;++i)
    {
        for(j=0;j<m;++j)
            printf("%c",arr[i][j]);
        printf("\n");
    }
    return 0;
}