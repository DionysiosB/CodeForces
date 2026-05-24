#include <cstdio>
#include <vector>
typedef long long ll;

ll zcy(ll x){
    std::vector<int> v; ll z(0);
    while(x > 0){v.push_back(x % 10); x /= 10;}
    for(ll p = v.size() - 1; p >= 0; p--){z = 10 * z + v[p];}
    for(ll p = 0; p < v.size(); p++){z = 10 * z + v[p];}
    return z;
}


int main(){
    
    ll k, M; scanf("%lld %lld", &k, &M);
    ll sum(0);
    for(ll p = 1; p <= k; p++){sum += zcy(p); sum %= M;}
    printf("%lld\n", sum);
    
    return 0;
}
