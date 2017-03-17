#include<iostream>
#include<set>
using namespace std;
bool mine[501][501];
//set<pair<int,int>>ss;
int main(void)
{
    int x,y,x0,y0,cnt=0;
    cin>>x>>y>>x0>>y0;
    string s;
    cin>>s;
    for(int i=0;i<s.size();++i)
    {
        if(mine[x0][y0]==true)
            cout<<"0 ";
        else
        {
            mine[x0][y0]=true;
            cout<<"1 ";
            cnt++;
        }
        if(s[i]=='U' && x0!=1)
            x0--;
        else if(s[i]=='D' && x0!=x)
            x0++;
        else if(s[i]=='L' && y0!=1)
            y0--;
        else if(s[i]=='R' && y0!=y)
            y0++;
    }
    cout<<x*y-cnt;

    return 0;
}