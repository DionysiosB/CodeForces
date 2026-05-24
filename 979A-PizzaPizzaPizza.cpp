#include <cstdio>
typedef long long ll;

int main(){

    ll n; scanf("%lld", &n);
    ++n;
    ll res = ((n > 1) && (n & 1)) ? n : (n / 2);
    printf("%lld\n", res);

    return 0;
}
