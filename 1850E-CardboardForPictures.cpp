#include <cstdio>
#include <cmath>
typedef long double dbl;
typedef long long ll;

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        dbl n, c; scanf("%Lf %Lf", &n, &c);
        dbl sum(0), ssq(0);
        for(dbl p = 0; p < n; p++){
            dbl x; scanf("%Lf", &x);
            sum += x; ssq += x * x;
        }

        ssq -= c;

        dbl alpha = 4 * n;
        dbl beta  = 4 * sum;
        dbl gamma = ssq;

        dbl left(0), right(1e10 + 7);
        long long ans(0);
        while(left <= right){
            ll mid = (left + right) / 2;
            dbl tst = gamma + beta * mid + alpha * mid * mid;
            //printf("Mid:%lld Tst:%Lf\n", mid, tst);
            if(-1 < tst && tst < 1){ans = mid; break;}
            else if(tst < 0){left = mid + 1;}
            else if(tst > 0){right = mid - 1;}
        }

        printf("%lld\n", ans);
    }

}

