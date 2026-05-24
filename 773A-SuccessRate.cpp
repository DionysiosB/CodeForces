#include <cstdio>
#include <iostream>

int main(){

    int t; scanf("%d", &t);
    while(t--){
        int64_t x, y, p, q; scanf("%lld %lld %lld %lld", &x, &y, &p, &q);
        int64_t  left(1), right(1e9), res(-1);

        while(left <= right){   
            int64_t mid = (left + right) / 2;
            int64_t s = mid * p - x;
            int64_t t = mid * q - y;
            if((s >= 0) && (t >= s)){res = t; right = mid - 1;}
            else{left = mid + 1;}
        }
        printf("%lld\n", res);
    }

    return 0;
}
