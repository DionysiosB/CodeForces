#include <iostream>
#include <cstdio>
using namespace std;
int arr[500][500];
int main(void)
{
  //  freopen("in.txt","r",stdin);
    int n,k;
    cin>>n>>k;
    --k;
    int st=1;
    //if(k>1)
    {
        for(int i=0;i<n;++i)
        {
            for(int j=0;j<k;++j)
            {
                arr[i][j]=st;
                ++st;
            }
        }
        for(int i=0;i<n;++i)
        {
            for(int j=k;j<n;++j)
            {
                arr[i][j]=st;
                st++;
            }
        }
    }
    int kaka=0;
    for(int i=0;i<n;++i)
        kaka+=arr[i][k];
    cout<<kaka<<endl;
    for(int i=0;i<n;++i,cout<<endl)
        for(int j=0;j<n;++j)
            cout<<arr[i][j]<<" ";

    return 0;
}