#include<stdio.h>
#include<string.h>
int check(char a[],int len)
{
    int i=0;
    int j=len-1;
    int flag=0;
    
    while(i<j)
    {
        if(a[i]!=a[j])
        {
            flag=1;
            break;
        }
        ++i;
        --j;
    }
    if(flag)
        return 0;
    return 1;
}
int main(void)
{
    char s[14];
    char temp[20];
    scanf("%s",s);
    int i,j,k;
    int len=strlen(s);
    i=0;
    j=len-1;
    if(len==1)
    {
        printf("%s%s",s,s);
        return 0;
    }
    while(i<j)
    {
        if(s[i]==s[j])
        {
            ++i;
            --j;
            continue;
        }
        for(k=0;k<i;++k)
            temp[k]=s[k];
        temp[i]=s[j];
        
        for(k=i;k<len;++k)
            temp[k+1]=s[k];
        temp[len+1]='\0';
        
        if(check(temp,len+1))
        {           
            printf("%s",temp);
            return 0;
        }
        
        for(k=0;k<=j;++k)
            temp[k]=s[k];

        temp[j+1]=s[i];
        
        for(k=j+1;k<len;++k)
            temp[k+1]=s[k];
        temp[len+1]='\0';
        
        if(check(temp,len+1))
        {           
            printf("%s",temp);
            return 0;
        }
        ++i;
        --j;
    }
    int flag=0;
    i=0,j=len-1;
    while(i<j)
    {
        if(s[i]!=s[j])
        {
            flag=1;
            break;
        }
        ++i;
        --j;
    }
    if(flag)
    {
        puts("NA");
        return 0;
    }
    
    for(i=0;i<len/2;++i)
        printf("%c",s[i]);
    printf("%c",s[i]);
    for(;i<len;++i)
        printf("%c",s[i]);
    
    return 0;
}