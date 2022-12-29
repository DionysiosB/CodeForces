#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
 
    
int main()
{
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        ll a[n],l=0,r=0,inl=0,inr=n-1,cnt=0,maxval=0;
        bool ok = true;
        for(int i = 0;i < n;i++){
            cin>>a[i];
        }
        while(true){
            if(l==r){
                maxval=cnt;
                l+=a[inl];
                inl++;
                if(inl>inr && l!=r){
                    break;
                }
                cnt++;
            }
            else if(l<r){
                while (l < r){
                    l+=a[inl];
                    inl++;
                    cnt++;
                    if (inl>inr && l!=r){ok=false;}
                }
                if (ok==false){break;}
            }
            else{
                while (r < l){
                    r+=a[inr];
                    inr--;
                    cnt++;
                    if (inl>inr && l!=r){ok=false;}
                }
            if (ok==false){break;}
            }
        }
        cout<<maxval<<endl;
    }
    return 0;
}
