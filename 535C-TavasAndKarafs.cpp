#include <cstdio>

int main(){

    long long a, b, n; scanf("%lld %lld %lld", &a, &b, &n);
    while(n--){
        long long l, t, m; scanf("%lld %lld %lld", &l, &t, &m);
        if(t < a + (l - 1) * b){puts("-1"); continue;}
        long long left(l), right(t + l), res(left);
        while(left <= right){
            long long mid = (left + right) / 2;
            long long sum = (2 * a + (l + mid - 2) * b) * (mid - l + 1) / 2;
            if(sum <= t * m){res = mid; left = mid + 1;}
            else{right = mid - 1;}
        }

        res = (res < (t + b - a) / b) ? res : ((t + b - a) / b);
        printf("%lld\n", res);
    }

    return 0;
}
