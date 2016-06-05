#include<iostream>
using namespace std;
static int arr[200][200];
int main(void)
{
    int n;
    cin>>n;
    while(n--)
    {
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        for(int i=x1;i<=x2;++i)
        {
            for(int j=y1;j<=y2;++j)
            {
                arr[i][j]++;
            }
        }
    }
    long long int ans=0LL;
    for(int i=1;i<=100;++i)
        for(int j=1;j<=100;++j)
            ans+=arr[i][j];
    cout<<ans;
    return 0;
}