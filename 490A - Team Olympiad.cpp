#include<stdio.h>
#include<vector>
using namespace std;
#define min(a,b) ((a)<(b)?(a):(b))
int main(void)
{
    vector<int> aa,bb,cc;
    vector<int>::iterator it1,it2,it3;
    int n;
    scanf("%d",&n);
    int i=0;
    while(n--)
    {
        ++i;
        int tmep;
        scanf("%d",&tmep);
        if(tmep==1)
            aa.push_back(i);
        else if(tmep==2)
            bb.push_back(i);
        else
            cc.push_back(i);
    }
    int ans=min(aa.size(),min(bb.size(),cc.size()));
    printf("%d\n",ans);
    it1=aa.begin();
    it2=bb.begin();
    it3=cc.begin();
    while(ans--)
    {
        printf("%d %d %d\n",*it1,*it2,*it3);
        ++it1;
        ++it2;
        ++it3;
    }
    aa.clear();
    bb.clear();
    cc.clear();
    return 0;
}