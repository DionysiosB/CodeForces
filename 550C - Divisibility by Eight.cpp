#include<iostream>
#include<string>
#include<cstdio>
using namespace std;
int main(void)
{
    string s;
    cin>>s;
    int flag=0;
    int num;
    for(int i=0;i<s.size();++i)
    {
        num=s[i]-'0';
        if(num==0 || num%8==0)
        {
            flag=1;
            break;
        }
    }
    if(flag)
    {
        printf("YES\n%d\n",num);
        return 0;
    }
    if(s.size()>=3)
    for(int i=0;i<s.size()-2;++i)
    {
        for(int j=i+1;j<s.size()-1;++j)
        {
            for(int k=j+1;k<s.size();++k)
            {
                int num=100*(s[i]-'0')+10*(s[j]-'0')+s[k]-'0';
                if(num%8==0)
                {
                    cout<<"YES"<<endl<<num;
                    return 0;
                }
            }
        }
    }
    if(s.size()>=2)
    {
        for(int i=0;i<s.size()-1;++i)
        {
            for(int j=i+1;j<s.size();++j)
            {
                int num=10*(s[i]-'0')+s[j]-'0';
                if(num%8==0)
                {
                    cout<<"YES"<<endl<<num;
                    return 0;
                }
            }
        }
    }
    cout<<"NO";
    return 0;
}