#include<iostream>
#include<vector>
#include<algorithm>

const int maxn=1e5+5;
char s[maxn],a[maxn],mx='a';
int vis[maxn],top=0,m;

int main(){

    std::ios_base::sync_with_stdio(false);
    long m; std::cin >> m;
    std::string s; std::cin >> s;

    int now=1;
    while(now+m-1<= s.size())
    {
        int res=now;
        for(int i=now+1;i<=now+m-1;i++)
        {
            if(s[i]<=s[res]) res=i;
        }
        a[++top]=s[res];
        vis[res]=1;
        mx=std::max(mx,a[top]);
        now=res+1;
    }
    for(int i=1;i<=s.size();i++)
    if(!vis[i]&&s[i]<mx) a[++top]=s[i];
    std::sort(a+1,a+top+1);
    printf("%s\n",a+1);
    return 0;
}
