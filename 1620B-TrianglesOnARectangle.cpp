#include <cstdio>
typedef long long ll;

int main(){


    ll t; scanf("%lld", &t);
    while(t--){
        ll w, h; scanf("%lld %lld", &w, &h);

        ll k(0), left(0), right(0), width(0);

        scanf("%lld", &k); scanf("%lld", &left);
        for(ll p = 1; p < k; p++){scanf("%lld", &right); width = right - left;}

        scanf("%lld", &k); scanf("%lld", &left);
        for(ll p = 1; p < k; p++){scanf("%lld", &right); ll cur = right - left; width = (width > cur) ? width : cur;}

        ll res = width * h;

        ll bottom(0), top(0), height(0);
        scanf("%lld", &k); scanf("%lld", &bottom);
        for(ll p = 1; p < k; p++){scanf("%lld", &top); height = top - bottom;}

        scanf("%lld", &k); scanf("%lld", &bottom);
        for(ll p = 1; p < k; p++){scanf("%lld", &top); ll cur = top - bottom; height = (height > cur) ? height : cur;}

        res = (res > height * w) ? res : (height * w);

        printf("%lld\n", res);
    }

}
