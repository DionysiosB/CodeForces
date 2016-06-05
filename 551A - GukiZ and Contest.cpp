#include<iostream>
#include<algorithm>
using namespace std;
int main(void)
{
    int arr[3000],temp[3000]={0};
    int n;
    cin>>n;
    for(int i=0;i<n;++i)
    {
        cin>>arr[i];
        temp[arr[i]]++;
    }
    int ans[3000];
    int pos=1,lala=0;
    for(int i=2000;i>=0;--i)
    {
        if(temp[i]==0)
            continue;
        for(int j=0;j<n;++j)
        {
            if(arr[j]==i)
                ans[j]=pos;
        }
        pos+=temp[i];
    }
    for(int i=0;i<n;++i)
        cout<<ans[i]<<" ";

    return 0;
}