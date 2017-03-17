#include<iostream>
#include<vector>
int arr[100001];
int kaka[100001];
int temp[100001];
using namespace std;
int main(void)
{
    int n;
    cin>>n;
    for(int i=0;i<n;++i)
    {
        cin>>arr[i];
        kaka[arr[i]]++;
    }
    vector<int> vec;
    for(int i=1;i<=n;++i)
    {
        if(kaka[i]==0)
            vec.push_back(i);
    }
    for(int i=0;i<n;++i)
    {
        if(temp[arr[i]]==1 || arr[i]>n)
        {
            arr[i]=vec[vec.size()-1];
            vec.pop_back();
        }
        else
        {
            temp[arr[i]]=1;
        }
    }
    for(int i=0;i<n;++i)
        cout<<arr[i]<<" ";

    return 0;
}