#include <cstdio>
typedef long long ll;

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        ll n, k; scanf("%lld %lld\n", &n, &k);
        ll res = (k / (n - 1)) * n + (k % (n - 1));
        if(k % (n - 1) == 0){--res;}   //Don't need the extra segment
        printf("%lld\n", res);
    }

    return 0;
}
