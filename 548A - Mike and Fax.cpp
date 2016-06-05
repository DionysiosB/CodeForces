#include<stdio.h>
#include<string.h>
char s[2000];
char temp[2000];
int check(char s[],int len)
{
    int flag=1;
    int i=0,j=len-1;
    while(i<j)
    {
        if(s[i]!=s[j])
        {
            flag=0;
            break;
        }
        ++i;
        --j;
    }
    if(flag==0)
        return 0;
    else
        return 1;

}
int main(void)
{
    scanf("%s",s);
    int len=strlen(s),k;
    scanf("%d",&k);
    if(len%k!=0)
    {
        puts("NO");
        return 0;
    }
    int lim=len/k;
    int lala=0;
    int i=0,flag=1;
    temp[lim]='\0';
    while(i<len)
    {
        while(lala<lim)
            temp[lala++]=s[i++];
        if(check(temp,lim)==0)
        {
            flag=0;
            break;
        }
        lala=0;
    }
    if(flag==1)
        puts("YES");
    else
        puts("NO");
    return 0;
}