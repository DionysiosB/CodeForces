#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int n;
    scanf("%d",&n);
    char *s=(char *)malloc(2*n-1);
    scanf("%s",s);
    int ans=0;
    int i;
    int arr[26]={0};
    for(i=0;i<2*n-2;i+=2)
    {
        arr[s[i]-'a']++;
        int temp=s[i+1]-'A';
        if(arr[temp]!=0)
            arr[temp]--;
        else
            ++ans;
    }
    free(s);
    printf("%d",ans);
    return 0;
}