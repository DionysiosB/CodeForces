#include<iostream>
#include<cstdlib>
using namespace std;
int arr[100001];
int main(void)
{
    int n;
    cin>>n;
    for(int i=0;i<n;++i)
        cin>>arr[i];
    cout<<abs(arr[0]-arr[1])<<" "<<abs(arr[0]-arr[n-1])<<endl;
    for(int i=1;i<n-1;++i)
    {
        cout<<min(abs(arr[i]-arr[i-1]),abs(arr[i]-arr[i+1]))<<" ";
        cout<<max(abs(arr[i]-arr[0]),abs(arr[i]-arr[n-1]));
        cout<<endl;
    }
    cout<<abs(arr[n-1]-arr[n-2])<<" "<<abs(arr[n-1]-arr[0]);
    return 0;
}