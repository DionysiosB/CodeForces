#include<iostream>
#include<cstring>
char arr[200][200];
using namespace std;
int main(void)
{
    int n;
    cin>>n;
    for(int i=0;i<n;++i)
            cin>>arr[i];
    int temp=0,ans=0;
    for(int i=0;i<n;++i)
    {
        temp=0;
        for(int j=0;j<n;++j)
        {
            if(strcmp(arr[i],arr[j])==0)
                ++temp;
        }
        ans=max(ans,temp);
    }
    cout<<ans;
    return 0;
}