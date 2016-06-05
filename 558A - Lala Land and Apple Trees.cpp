#include<algorithm>
#include<iostream>
using namespace std;
struct arr
{
    int x;
    int val;
};
typedef struct arr arr;
bool cmp(arr arr1,arr arr2)
{
    return arr1.x<arr2.x;
}
int main(void)
{
    int n;
    cin>>n;
    struct arr arr1[100],arr2[100];
    int l=0,r=0;
    for(int i=0;i<n;++i)
    {
        int temp;
        cin>>temp;
        if(temp>0)
        {
            arr1[l].x=temp;
            cin>>temp;
            arr1[l++].val=temp;
        }
        else
        {
            arr2[r].x=-temp;
            cin>>temp;
            arr2[r++].val=temp;
        }
    }
    sort(arr1,arr1+l,cmp);
    sort(arr2,arr2+r,cmp);
    int ans=0;
    if(l>r)
    {
        for(int i=0;i<=r;++i)
            ans+=arr1[i].val;
        for(int i=0;i<r;++i)
            ans+=arr2[i].val;
        cout<<ans;
    }
    else if(r>l)
    {
        for(int i=0;i<=l;++i)
            ans+=arr2[i].val;
        for(int i=0;i<l;++i)
            ans+=arr1[i].val;
        cout<<ans;
    }
    else
    {
        for(int i=0;i<l;++i)
            ans+=arr1[i].val;
        for(int i=0;i<r;++i)
            ans+=arr2[i].val;
        cout<<ans;
    }
    return 0;
}