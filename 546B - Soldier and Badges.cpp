#include<iostream>
using namespace std;
int arr[30010];
int main(void)
{
    int n;
    cin>>n;
    int i,ans=0;
    for(i=0;i<n;++i)
    {
        int temp;
        cin>>temp;
        arr[temp]++;
    }
    for(i=0;i<=n*2;++i)
    {
        if(arr[i]<=1)
            continue;
        int cou=1;
        int j=i+1;
        while(--arr[i])
        {
            arr[j++]++;
            ans+=cou;
            cou++;
        }
    }
    cout<<ans;
    return 0;
}