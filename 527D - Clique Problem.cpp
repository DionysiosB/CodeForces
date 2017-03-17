/*basic funda is to find maximum non overlapping intervals
the question is just like a circle given with center x and radius w ...
hence the start time will be x-w and end time will be x+w*/
#include<vector>
#include<algorithm>
#include<cstdio>
using namespace std;
int main(void)
{
    int n;
    vector< pair<int,int> >arr;
    vector< pair<int,int> >::iterator it;
    scanf("%d",&n);
    while(n--)
    {
        int c,r;
        scanf("%d %d",&c,&r);
        arr.push_back(make_pair(c+r,c-r));   // two intervals with start time c-r and end time c+r
    }
    sort(arr.begin(),arr.end());
    int ans=1;
    it=arr.begin();
    int st=it->second;
    int en=it->first;
    ++it;
    while(it!=arr.end())
    {
        if(it->second>=en)
        {
            st=it->second;
            en=it->first;
            ++ans;
        }
        ++it;
    }
    printf("%d",ans);
    arr.clear();
    return 0;
}