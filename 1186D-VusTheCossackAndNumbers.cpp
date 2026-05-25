#include <cstdio>
#include <vector>
typedef long long ll;

int main(){

    ll n; scanf("%lld", &n);
    std::vector<double> a(n);
    std::vector<ll> b(n); 
    ll sum(0);
    for(ll p = 0; p < n; p++){
        scanf("%lf", &a[p]); 
        b[p] = a[p]; 
        if(b[p] > a[p]){--b[p];}
        sum += b[p];
    }

    for(ll p = 0; p < n; p++){
        if(a[p] <= b[p]){continue;}
        else if(sum < 0){++b[p]; ++sum;}
        else{break;}
    }

    for(ll p = 0; p < n; p++){printf("%lld\n", b[p]);}

    return 0;
}
