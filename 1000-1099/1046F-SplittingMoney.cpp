#include <cstdio>
#include <vector>
typedef long long ll;

int main(){
    
    long n; scanf("%ld", &n);
    std::vector<ll> a(n); for(long p = 0; p < n; p++){scanf("%lld", &a[p]);}
    ll x, f; scanf("%lld %lld", &x, &f);
    
    ll fee(0);
    for(long p = 0; p < n; p++){fee += f * ((a[p] + f - 1) / (x + f));}
    printf("%lld\n", fee);
    
    return 0;
}
