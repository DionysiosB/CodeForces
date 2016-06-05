#include<iostream>
#include<cstdlib>
using namespace std;
int main(void)
{
    int n;
    cin>>n;
    int *arr=(int *)malloc(sizeof(int)*n);
    int *temp=(int *)malloc(sizeof(int)*n);
    int *lala=(int *)calloc(sizeof(int),n);
    for(int i=0;i<n;++i)
        cin>>arr[i];
    temp[n-1]=arr[n-1];
    lala[n-1]=1;
    for(int i=n-2;i>=0;--i)
    {
        temp[i]=temp[i+1];
        if(temp[i]<arr[i])
        {
            lala[i]=1;
            temp[i]=arr[i];
        }
    }
    for(int i=0;i<n;++i)
    {
        if(lala[i]==1)
            cout<<"0 ";
        else
            cout<<temp[i]-arr[i]+1<<" ";
    }
    free(lala);
    free(temp);
    free(arr);
    return 0;
}