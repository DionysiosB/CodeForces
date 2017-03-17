#include<iostream>
#include<vector>
using namespace std;
int main(void)
{
    int n;
    cin>>n;
    bool arr1[51]={false};
    bool arr2[51]={false};
    for(int i=0;i<n*n;++i)
    {
        int a,b;
        cin>>a>>b;
        if(arr1[a]==false && arr2[b]==false)
        {
            cout<<i+1<<" ";
            arr1[a]=true;
            arr2[b]=true;
        }
    }
    return 0;
}