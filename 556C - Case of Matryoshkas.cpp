#include<iostream>
#include<cstdlib>
using namespace std;
int main(void)
{
    int n,k;
    cin>>n>>k;
    int ans=0;
    for(int j=0;j<k;++j)
    {
        int temp;
        cin>>temp;
        int *arr=(int *)malloc(sizeof(int)*temp);
        for(int i=0;i<temp;++i)
            cin>>arr[i];
        int flag=0;
        if(arr[0]==1)
        {
            int i=1;
            while(i<=temp && arr[i-1]==i)
                ++i;
            if(i==temp+1)
                flag=1;
            else
                ans+=(temp-i+1)*2;
        }
        else
        {
            if(temp!=1)
                ans+=temp-1;
            ans+=temp;
        }
    }
    cout<<ans;
    return 0;
}