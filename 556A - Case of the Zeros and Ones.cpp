#include<string>
#include<iostream>
#include<cstdlib>
using namespace std;
int main(void)
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int one=0,zero=0;
    for(int i=0;i<s.size();++i)
    {
        if(s[i]=='0')
            zero++;
        else
            one++;
    }
    cout<<abs(zero-one);
    return 0;
}