#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
int main(void)
{
    string s;
    cin>>s;
    long long ans=1LL;
    for(int i=0;i<s.size();++i)
    {
        int curr=63;
        if(s[i]>='a' && s[i]<='z')
            curr=s[i]-'a'+36;
        else if(s[i]>='A' && s[i]<='Z')
            curr=s[i]-'A'+10;
        else if(s[i]>='0' && s[i]<='9')
            curr=s[i]-'0';
        else if(s[i]=='-')
            curr=62;
        int len=0,zer=0;
        while(curr)
        {
            if(curr%2==0)
                zer++;
            len++;
            curr=curr/2;
        }
        while(len<6)
        {
            ++len;
            ++zer;
        }
        while(zer--)
            ans=(ans*3)%mod;
    }
    cout<<ans;

    return 0;
}