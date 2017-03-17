#include<stdio.h>
#include<string.h>
int main(void)
{
    int n;
    scanf("%d",&n);
    char s[200];
    scanf("%s",s);
    int len=strlen(s);
    int i,j,flag=0,k;
    for(i=0;i<len;++i)
    {
        for(j=1;j<len;++j)
        {
            int tot=0;
            for(k=i;k<len && k<=i+4*j;k+=j)
            {
                if(s[k]=='*')
                    ++tot;
            }
            if(tot==5)
            {
                flag=1;
                break;              
            }
        }
        if(flag)
            break;
    }
    if(flag)
        printf("yes");
    else
        printf("no");
    return 0;
}