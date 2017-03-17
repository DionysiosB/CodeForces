#include<string>
#include<iostream>
#include<vector>
#include<cstdio>
using namespace std;
int main(void)
{
    string s;
    cin>>s;
    if(s.find("AB")==string::npos || s.find("BA")==string::npos || s.size()<=3)
    {
        cout<<"NO";
        return 0;
    }
    vector<int> pos;
    for(int i=0;i<s.size();++i)
    {
        if(i==0)
        {
            if(s[i]=='A' && s[i+1]=='B')
                pos.push_back(i);
        }
        else if(i==s.size()-1)
        {
            if(s[i]=='A' && s[i-1]=='B')
                pos.push_back(i);
        }
        else if(s[i]=='A' && (s[i-1]=='B'||s[i+1]=='B'))
            pos.push_back(i);
    }
    int flag=0;
    for(int i=0;i<pos.size();++i)
    {
        if(pos[i]!=0)
        {
            if(s[pos[i]-1]=='B')
            {
                for(int j=0;j<pos.size();++j)
                {
                    if(pos[j]!=s.size()-1)
                    {
                        if(s[pos[j]+1]=='B')
                        {
                            if(pos[j]>pos[i] || pos[j]<=pos[i]-3)
                            {
                                flag=1;
                                break;
                            }
                        }
                    }
                }
            }
        }

        if(flag)
            break;
    }
    pos.clear();
    s.clear();
    if(flag)
        puts("YES");
    else
        puts("NO");
    return 0;
}