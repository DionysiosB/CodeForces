#include<set>
#include<cstdio>
#include<climits>
using namespace std;
int main(void)
{
    set<double> slope;
    set<double>::iterator it;
    int n,x,y,ans=0;
    scanf("%d %d %d",&n,&x,&y);
    while(n--)
    {
        double sl;
        int nume,deno;
        int a,b;
        scanf("%d %d",&a,&b);
        nume=a-x;
        deno=b-y;
        if(deno==0)
        {
            sl=INT_MAX;
        }
        else
            sl=double(nume)/(double)deno;
        it=slope.find(sl);
        if(it==slope.end())
        {
            ++ans;
            slope.insert(sl);
        }
    }
    slope.clear();
    printf("%d\n",ans);
    return 0;
}