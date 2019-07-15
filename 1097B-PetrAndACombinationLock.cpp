#include <cstdio>
#include <vector>
typedef long long ll;

int main(){

    const long CIRCLE = 360;
    long n; scanf("%ld", &n);
    std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
    ll N = (1 << n);
    bool res(false);
    for(ll p = 0; p < N; p++){
        ll s(0), x(p);
        for(long d = 0; d < n; d++){
            int g = (x % 2); x /= 2;
            s += g ? a[d] : (-a[d]);
        }
        s %= CIRCLE;
        if(!s){res = true; break;}
    }

    puts(res ? "YES" : "NO");

    return 0;
}
