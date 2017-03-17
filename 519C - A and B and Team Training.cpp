#include<stdio.h>
int main(void)
{
    int n,m;
    scanf("%d %d",&n,&m);
    if(n==0 || m==0)
    {
        printf("0");
        return 0;
    }
    int ans=0;
    while(n>=1 && m>=1)
    {
        if(n>m)
        {
            while(n>m)
            {
                if(n>=2 && m>=1)
                {
                    n=n-2;
                    m=m-1;
                    ++ans;                  
                }   
                else 
                    break;
            }
        }
        else if(m>n)
        {
            while(m>n)
            {
                if(m>=2 && n>=1)
                {
                    m=m-2;
                    n=n-1;
                    ++ans;                  
                }   
                else 
                    break;
            }           
        }
        else
        {
            if(m>=3 && n>=3)
            {
                
                m=m-3;
                n=n-3;
                ans+=2;
            }
            else if(m>=2 && n>=1)
            {
                m=m-2;
                n=n-1;
                ++ans;
            }
            else if(n>=2 && m>=1)
            {
                n=n-2;
                m=m-1;
                ++ans;
            }
            else
                break;          
        }
    }
    printf("%d",ans);
    return 0;
}