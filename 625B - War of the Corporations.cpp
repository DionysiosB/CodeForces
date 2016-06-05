#include <iostream>
#include <cstdio>
using namespace std;
int main(void)
{
   // freopen("in.txt","r",stdin);
    string s1,s2;
    cin>>s1>>s2;
    int ans=0;
    for(int i=0;i<s1.size();++i)
    {
        if(i+s2.size()<=s1.size())
        {
            string temp=s1.substr(i,s2.size());
            if(temp.compare(s2)==0)
            {
                ++ans;
                i=i+s2.size()-1;
            }
        }
    }
    cout<<ans;
    return 0;
}