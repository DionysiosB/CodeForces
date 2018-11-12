#include <cstdio>
#include <vector>
typedef long long ll;

int main(){

    ll n; scanf("%lld", &n);
    std::vector<int> x(n), y(n);
    for(ll p = 0; p < n; p++){scanf("%d %d", &x[p], &y[p]);}

    ll count(0);
    for(ll a = 0; a < n; a++){
        for(ll b = a + 1; b < n; b++){
            for(ll c = b + 1; c < n; c++){
                count += ((x[b] - x[a]) * (y[c] - y[b]) - (x[c] - x[b]) * (y[b] - y[a]) != 0);
            }
        }
    }

    printf("%lld\n", count);

    return 0;
}
