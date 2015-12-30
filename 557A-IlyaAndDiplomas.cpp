#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,i;
    int arr[3],brr[3],ans[3];
    
    cin>>n;
    for(i=0;i<3;i++){
        cin>>arr[i]>>brr[i];
        ans[i] = arr[i];
        n -= arr[i];
    }

    for(i=0; i<3; i++){
        if(n == 0){
            break;
        }
        
        n += arr[i];
        ans[i] = min(n,brr[i]);
        n -= ans[i];
        
    }
    
    cout<<ans[0]<<" "<<ans[1]<<" "<<ans[2];
    
    return 0;
}