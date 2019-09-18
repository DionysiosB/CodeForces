#include <cstdio>
#include <vector>
#include <algorithm>
typedef long long ll;

int main(){
    
    std::vector<ll> x(3); ll d; 
    scanf("%lld %lld %lld %lld", &x[0], &x[1], &x[2], &d);
    sort(x.begin(), x.end());
    ll t1 = x[0] - x[1] + d;
    ll t2 = x[1] + d - x[2];
    ll t = (t1 > 0 ? t1 : 0) + (t2 > 0 ? t2 : 0);
    printf("%lld\n", t);

    return 0;
}
