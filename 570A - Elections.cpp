#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(void)
{
    int n,m;
    cin>>n>>m;
    vector<int> x;
    int arr[101]={0};
    for(int i=0;i<m;++i)
    {
        x.clear();
        for(int j=0;j<n;++j)
        {
            int temp;
            cin>>temp;
            x.push_back(temp);
        }
        int winner=1,temp=x[0];
        for(int j=1;j<n;++j)
            if(temp<x[j])
            {
                winner=j+1;
                temp=x[j];
            }
        arr[winner]++;
    }
    int ans=1,temp=arr[1];
    for(int i=2;i<=100;++i)
        if(arr[i]>temp)
        {
            ans=i;
            temp=arr[i];
        }
    cout<<ans;
    return 0;
}