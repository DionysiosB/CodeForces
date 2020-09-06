#include <cstdio>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll A, B, X, Y, N; scanf("%lld %lld %lld %lld %lld", &A, &B, &X, &Y, &N);

        ll n(N), a(A), b(B);
        ll u = a - X; u = (u < n) ? u : n;
        a -= u; n -= u;
        u = b - Y; u = (u < n) ? u : n;
        b -= u;
        ll resA = a * b;

        n = N; a = A; b = B;
        u = b - Y; u = (u < n) ? u : n;
        b -= u; n -= u;
        u = a - X; u = (u < n) ? u : n;
        a -= u;
        ll resB = a * b;

        ll res = (resA < resB) ? resA : resB;

        printf("%lld\n", res);
    }

    return 0;
}
