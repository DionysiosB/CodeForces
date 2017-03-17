#include<string>
#include<iostream>
using namespace std;
int main(void)
{
    string s;
    cin>>s;
    int len=s.size();
    int ans=26*(len+1);
    ans-=len;
    cout<<ans;
    return 0;
}