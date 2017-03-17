#include<iostream>
using namespace std;
int check(int arr[],int n)
{
    int flag=1;
    for(int i=0;i<n;++i)
        if(arr[i]!=i)
    {
        flag=0;
        break;
    }
    return flag;
}
int main(void)
{
    int arr[2000];
    int n;
    cin>>n;
    for(int i=0;i<n;++i)
        cin>>arr[i];

    for(int i=0;i<1000;++i)
    {
        if(check(arr,n)==1)
        {
            cout<<"Yes\n";
            return 0;
        }
        for(int i=0;i<n;++i)
        {
            if(i%2==1)
            {
                arr[i]--;
                if(arr[i]<0)
                    arr[i]=n-1;
            }
            else
            {
                arr[i]++;
                if(arr[i]==n)
                    arr[i]=0;
            }
        }
    }
    cout<<"No\n";
    return 0;
}