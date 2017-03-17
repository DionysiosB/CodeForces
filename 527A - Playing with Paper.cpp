#include<stdio.h>
#include<iostream>
int main(void)
{
    long long int a,b;
    std::cin>>a>>b;
    if(a==b)
    {
        printf("1");
        return 0;
    }
    long long int ans=0;
    while(b!=1LL)
    {
        long long int kaka=a/b;
        if(kaka==0LL)
        {
            ans++;
            long long int temp=a;
            a=b;
            b=temp;
        }
        else
        {
            ans+=kaka;
            long long int temp=a;
            a=b;
            b=temp-b*kaka;
        }
        if(a==b || a<=0 || b<=0)
        {
            std::cout<<ans;
            return 0;
        }
    }

    ans+=a-b;
    std::cout<<ans+1;
    return 0;
}