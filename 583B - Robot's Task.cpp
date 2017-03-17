#include<iostream>
using namespace std;
int main(void)
{
    int n,ans=-1;
    cin>>n;
    int arr[1001];
    bool crac[1001]={false};
    for(int i=0;i<n;++i)
        cin>>arr[i];
    int crack=0;
    int curr=0;
    while(crack<n)
    {
        ++ans;
        for(int i=0;i<n;++i)
        {
            if(crac[i]==false && curr>=arr[i])
            {
                crac[i]=true;
                ++curr;
                ++crack;
            }
        }
        if(crack>=n)
            break;
        ++ans;
        for(int i=n-1;i>=0;--i)
        {
            if(crac[i]==false && curr>=arr[i])
            {
                crac[i]=true;
                ++curr;
                ++crack;
            }
        }
    }
    cout<<ans;
    return 0;
}