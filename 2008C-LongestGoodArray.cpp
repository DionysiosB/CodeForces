#include <cstdio>
typedef long long ll;

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        ll a, b; scanf("%lld %lld", &a, &b);
        ll dist = b - a;
        ll left(1), right(dist + 7), res(1);
        while(left <= right){
            ll mid = (left + right) / 2;
            ll tst = mid * (mid - 1) / 2;
            if(tst <= dist){res = mid; left = mid + 1;}
            else{right = mid - 1;}
        }

        printf("%lld\n", res);
    }

}
