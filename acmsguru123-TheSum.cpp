#include <cstdio>
#include <vector>
typedef long long ll;

int main(){

    std::vector<ll> v(43, 0); v[1] = v[2] = 1;
    for(long p = 3; p < v.size(); p++){v[p] = v [p - 1] + v[p - 2];}
    for(long p = 1; p < v.size(); p++){v[p] += v [p - 1];}

    ll k; scanf("%lld", &k);
    printf("%lld\n", v[k]);
}
