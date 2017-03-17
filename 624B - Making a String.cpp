#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
int main(void)
{
    //freopen("in.txt","r",stdin);
    int n;
    cin>>n;
    vector<long long int> arr;
    for(int i=0;i<n;++i)
    {
        long long int temp;
        cin>>temp;
        arr.push_back(temp);
    }
    sort(arr.begin(),arr.end());
    long long int ans=arr[n-1];
    for(int i=n-2;i>=0;--i)
    {
        if(arr[i]>=arr[i+1])
        {
            if(arr[i+1]==0)
                break;
            arr[i]=arr[i+1]-1;
        }
        ans+=arr[i];
    }
    cout<<ans;
    return 0;
}