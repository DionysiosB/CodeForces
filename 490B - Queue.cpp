#include<cstdio>
#include<map>
#include<vector>
using namespace std;
map<int,int> arr;
int aa[1000001]={0};
int bb[1000001]={0};
int main(void)
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;++i)
    {
        int a,b;
        scanf("%d %d",&a,&b);
        arr.insert(make_pair(a,b));
        aa[a]=1;
        bb[b]=1;
    }
    int first;
    for(int i=1;i<=1000000;++i)
        if(aa[i]==1 && bb[i]==0)
        {
            first=i;
            break;
        }
    printf("%d ",first);
    int ch=0;
    int ch2=first;
    while(--n)
    {
        printf("%d ",arr[ch]);
        int temp=ch;
        ch=ch2;
        ch2=arr[temp];
    }
    return 0;
}