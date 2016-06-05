#include<stdio.h>
int arr[1001][1001];
int main(void)
{
    //freopen("in.txt","r",stdin);
    int n,m,k;
    scanf("%d %d %d",&n,&m,&k);
    int i,ans=0,j,l;
    for(i=1;i<=n;++i)
        for(j=1;j<=m;++j)
            arr[i][j]=0;
    for(i=1;i<=k;++i)
    {
        int a,b;
        scanf("%d %d",&a,&b);
        arr[a][b]=1;
        if(ans>0)
            continue;
        if(a>1 && b>1)
            if(arr[a-1][b]==1 && arr[a][b-1]==1 && arr[a-1][b-1]==1)
                ans=i;
        if(a<n && b>1)
            if(arr[a][b-1]==1 && arr[a+1][b]==1 && arr[a+1][b-1]==1)
                ans=i;
        if(a>1 && b<m)
            if(arr[a][b+1]==1 && arr[a-1][b]==1 && arr[a-1][b+1]==1)
                ans=i;
        if(a<n && b<m)
            if(arr[a+1][b]==1 && arr[a+1][b+1]==1 && arr[a][b+1]==1)
                ans=i;

    }
    printf("%d\n",ans);
    return 0;
}