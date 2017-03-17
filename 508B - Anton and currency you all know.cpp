#include<stdio.h>
#include<string.h>
char s[100002];
void swap(char *a,char *b)
{
    char temp=*a;
    *a=*b;
    *b=temp;
}
int main(void)
{
    //freopen("in.txt","r",stdin);
    scanf("%s",s);
    int len=strlen(s);
    int pos=-1,i;
    for(i=len-2;i>=0;--i)
    {
        int temp=s[i]-'0';
        if(temp%2)
            continue;
        if(pos==-1)
        {
            pos=i;
        }
        else
        {
            if(temp<s[len-1]-'0')
                pos=i;
        }
    }
    if(pos==-1)
        puts("-1");
    else
    {
        swap(&s[pos],&s[len-1]);
        puts(s);
    }

    return 0;
}