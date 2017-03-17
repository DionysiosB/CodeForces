#include<stdio.h>
#include<iostream>
int main(void)
{
    long long int n,k,w;
    std::cin>>n>>k>>w;
    long long int ans;
    ans=(w*(w+1))/2;
    ans*=n;
    ans-=k;
    if(ans<=0)
        printf("0");
    else
        std::cout<<ans;
    return 0;
}