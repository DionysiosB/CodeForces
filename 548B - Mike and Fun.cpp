#include<stdio.h>
#define max(a,b) ((a)>(b)?(a):(b))
int m,n;
int arr[1000][1000];
int ma[1000];
int kaka()
{
    int i,ans=0;
    for(i=0;i<n;++i)
        ans=max(ans,ma[i]);
    return ans;
}
int cal()
{
    int i,j,currans=0;
    int k=0;
    for(i=0;i<n;++i)
    {
        k=0;
        for(j=0;j<m;++j)
        {
            if(arr[i][j]==1)
            {
                int temp=0;
                while(arr[i][j]==1 && j<m)
                {
                    ++temp;
                    j++;
                }
                currans=max(currans,temp);
                k=max(k,temp);
            }
        }
        ma[i]=k;
    }
    return currans;
}
int main(void)
{
    //freopen("in.txt","r",stdin);
    int q;
    scanf("%d %d %d",&n,&m,&q);
    int i,j;
    for(i=0;i<n;++i)
        for(j=0;j<m;++j)
            scanf("%d",&arr[i][j]);

    int ans=cal();
    while(q--)
    {
        int a,b;
        scanf("%d %d",&a,&b);
        a--;b--;
        int k=0;
        if(arr[a][b]==1)
        {
            arr[a][b]=0;
            int j,i=a;
            for(j=0;j<m;++j)
            {
                if(arr[i][j]==1)
                {
                    int temp=0;
                    while(arr[i][j]==1 && j<m)
                    {
                        ++temp;
                        j++;
                    }
                    k=max(k,temp);
                }
            }
            ma[i]=k;
            ans=kaka();
            printf("%d\n",ans);
        }
        else
        {
            arr[a][b]=1;
            int j,i=a;
            for(j=0;j<m;++j)
            {
                if(arr[i][j]==1)
                {
                    int temp=0;
                    while(arr[i][j]==1 && j<m)
                    {
                        ++temp;
                        j++;
                    }
                    k=max(k,temp);
                }
            }
            ma[i]=k;
            ans=kaka();
            printf("%d\n",ans);
        }
    }
    return 0;
}