#include <cstdio>
#include <cmath>
typedef long long ll;
typedef long double dbl;

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

        dbl w = (-sum + sqrt(sum * sum - n * ssq)) / (2 * n);
        if( std::abs(4 * n * (w + 1) * (w + 1) + 4 * sum * (w + 1) + ssq) < 0.5){++w;}
        else if( std::abs(4 * n * (w - 1) * (w - 1) + 4 * sum * (w - 1) + ssq) < 0.5){--w;}
        ll res = w; printf("%lld\n", res);
    }

}

