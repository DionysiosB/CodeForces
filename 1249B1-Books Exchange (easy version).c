#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pll pair<ll,ll>
#define vpll vector <pll>
#define pb push_back

int main()
{
   int t,n,a[200];
   cin>>t;
   while(t--)
   {
       cin>>n;
       for(int i=0;i<n;i++){
        cin>>a[i];
        --a[i];
       }
        for(int i=0;i<n;i++)
        {
            int c=0;
            int j=i;
            do{
                c++;
                j=a[j];
            }while(j!=i);
             cout<<c<<" ";
        }
        cout<<"\n";
   }
   return 0;
    }
