#include<stdio.h>
int main(void)
{
    char s[40];
    scanf("%s",s);
    int i;
    for(i=0;s[i]!='\0';++i)
    {
        if(s[i]>='5')
        {
            if(i==0 && s[i]=='9')
                continue;
            s[i]='0'+9-s[i]+'0';
        }
    }
    puts(s);
    return 0;
}