#include<cstdio>
#include<algorithm>
#include<cstdlib>
#include<vector>
#include<set>
using namespace std;
int main(void)
{
    int n,k,i;
    scanf("%d %d",&n,&k);


    multiset< pair<int,int> > arr;
    multiset< pair<int,int> >::iterator it;
    for(i=0;i<n;++i)
    {
        int temp;
        scanf("%d",&temp);
        arr.insert(make_pair(temp,i+1));
    }
    vector<int> vec;
    int ans=0;
    for(it=arr.begin();it!=arr.end();++it)
    {
        if(k>=it->first)
        {
            vec.push_back(it->second);
            ++ans;
            k=k-it->first;
        }
        else
            break;
    }
    printf("%d\n",ans);
    for(i=0;i<vec.size();++i)
        printf("%d ",vec[i]);
    return 0;
}