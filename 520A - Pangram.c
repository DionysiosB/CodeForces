#include<stdio.h>
int main(void)
{
    int t;
    scanf("%d",&t);
    char s[1000];
    scanf("%s",s);
    int arr[26]={0};
    int i;
    for(i=0;s[i]!='\0';++i)
    {
        if(s[i]<='z' && s[i]>='a')
            arr[s[i]-'a']++;
        else
            arr[s[i]-'A']++;
    }
    int flag=1;
    for(i=0;i<26;++i)
        if(arr[i]==0)
        {
            flag=0;
            break;
        }
    if(flag)
        printf("YES");
    else
        printf("NO");
    return 0;
}