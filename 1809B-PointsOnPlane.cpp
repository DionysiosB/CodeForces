#include <cstdio>
typedef long long ll;

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        ll left(0), right(1e9), res(0);
        while(left <= right){
            ll mid = (left + right) / 2;
            if(mid * mid < n){res = mid; left = mid + 1;}
            else{right = mid - 1;}
        }

        printf("%lld\n", res);
    }

}
