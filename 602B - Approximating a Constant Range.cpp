#include<iostream>
#include<cstdlib>
#include<set>
using namespace std;
int main(void)
{
    int n;
    multiset<int> s;
    cin>>n;
    int *arr=(int *)malloc(sizeof(int)*n);
    for(int i=0;i<n;++i)
        cin>>arr[i];

    int st=0,en=0,mini=arr[st],maxi=arr[st],ans=1;
    s.insert(arr[st]);
    while(st<=en)
    {
        mini=*s.begin();
        multiset<int>::iterator it=s.end();
        it--;
        maxi=*it;
        if(en==n-1 && maxi-mini<=1)
            break;
        if(en==n-1)
        {
            if(st==en)
                break;
            s.erase(s.find(arr[st]));
            ++st;
        }

        if(maxi-mini<=1)
        {
            ans=max(ans,en-st+1);
            ++en;
            s.insert(arr[en]);
        }
        else
        {
            s.erase(s.find(arr[st]));
            ++st;
        }
    }
    free(arr);
    s.clear();
    if(maxi-mini<=1)
        ans=max(ans,en-st+1);
    cout<<ans;
    return 0;
}