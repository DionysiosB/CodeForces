#include <cstdio>
#include <vector>
typedef long long ll;

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        ll r(1LL << 62);
        std::vector<ll> v;
        while(r > 0 && r != n){
            if((r | n) == n){v.push_back(n ^ r);}
            r /= 2;
        }
        v.push_back(n);

        printf("%ld\n", v.size());
        for(long p = 0; p < v.size(); p++){printf("%lld ", v[p]);}
        puts("");
    }
}
