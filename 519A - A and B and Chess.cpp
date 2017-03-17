#include<string>
#include<iostream>
#include<cstdio>
using namespace std;
string s;
int main(void)
{
    int i,j;
    int ans1=0,ans2=0;
    //freopen("in.txt","r",stdin);
    for(j=0;j<8;++j)
    {
        cin>>s;
        for(i=0;i<8;++i)
        {
            if(s[i]=='q')
                ans2+=9;
            else if(s[i]=='Q')
                ans1+=9;
            else if(s[i]=='r')
                ans2+=5;
            else if(s[i]=='R')
                ans1+=5;
            else if(s[i]=='b')
                ans2+=3;
            else if(s[i]=='B')
                ans1+=3;
            else if(s[i]=='n')
                ans2+=3;
            else if(s[i]=='N')
                ans1+=3;
            else if(s[i]=='p')
                ans2+=1;
            else if(s[i]=='P')
                ans1+=1;
        }
    }
    if(ans1>ans2)
        printf("White");
    else if(ans1<ans2)
        printf("Black");
    else 
        printf("Draw");
}