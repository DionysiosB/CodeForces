#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstdlib>
using namespace std;
int main(void)
{
    int n;
    scanf("%d",&n);
    int *arr=(int *)malloc(sizeof(int)*n);
    
    for(int i=0;i<n;++i)
        scanf("%d",&arr[i]);
        
    sort(arr,arr+n);
        
    if(n<4)
    {
        printf("0\n");
        return 0;
    }
    int i;
    long long int ans=0,l1=0,l2=0,l3=0,l4=0;
    for(i=n-1;i>=1;--i)
    {
        if(l1!=0 && l2!=0)
        {
            if(arr[i]==arr[i-1] || arr[i]==arr[i-1]+1)
            {
                l3=l4=arr[i-1];
                ans+=l1*l3;
                l1=l2=l3=l4=0;
                i--;
            }
        }
        else
        {
            if(arr[i]==arr[i-1] || (arr[i]==arr[i-1]+1))
            {
                l1=l2=arr[i-1];
                i--;
            }
        }       
    }
    free(arr);
    cout<<ans;
    return 0;
}