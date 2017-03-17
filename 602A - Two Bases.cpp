#include<iostream>
#include<cmath>
#include<cstdlib>
using namespace std;
int main(void)
{
    long long b;
    int n;
    cin>>n>>b;
    long long int *arr=(long long int *)malloc(sizeof(long long int)*n);
    for(int i=0;i<n;++i)
        cin>>arr[i];
    long long a=arr[n-1],base=b;
    for(int i=n-2;i>=0;--i)
    {
        a=a+arr[i]*b;
        b=b*base;
    }
    free(arr);
    cin>>n>>b;
    base=b;
    arr=(long long int *)malloc(sizeof(long long int)*n);
    for(int i=0;i<n;++i)
        cin>>arr[i];
    long long c=arr[n-1];
    for(int i=n-2;i>=0;--i)
    {
        c=c+arr[i]*b;
        b=b*base;
    }
    if(a<c)
        cout<<"<";
    else if(a>c)
        cout<<">";
    else
        cout<<"=";
    free(arr);
    return 0;
}