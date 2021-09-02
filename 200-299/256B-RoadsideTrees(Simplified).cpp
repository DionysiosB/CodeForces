#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main(){
    int t;
    cin>>t;
    vector<int> v(t);
    for(int i=0; i<t; i++){
        cin>>v[i];
    }
    long ans = v[0] + 1;
    for(int i=0;i<t - 1;i++){
        ans+=(abs(v[i] - v[i + 1]) + 2);
    }
    cout<<ans<<endl;
    return 0;
}