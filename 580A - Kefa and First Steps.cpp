#include<iostream>
#include<algorithm>
using namespace std;
int main(void)
{
    int n;
    cin>>n;
    int *arr=(int *)malloc(sizeof(int)*n);
    for(int i=0;i<n;++i)
        cin>>arr[i];
    int curr=arr[0],ans=1,temp=1;
    for(int i=1;i<n;++i)
    {
        ans=max(ans,temp);
        if(arr[i]>=curr)
        {
            curr=arr[i];
            ++temp;
        }
        else
        {
            temp=1;
            curr=arr[i];
        }
    }
    cout<<max(ans,temp);
    return 0;
}