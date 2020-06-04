#include <cstdio>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll h, c, t; scanf("%lld %lld %lld", &h, &c, &t);
        if(t >= h){puts("1");}
        else if(2 * t <= h + c){puts("2");}
        else{
            long n = (h - t) / (2 * t - c - h);
            long double u = (((n + 1.0) * h + n * c)/ (2.0 * n + 1) - t); 
            long double v = (((n + 2.0) * h + (n + 1) * c)/ (2.0 * n + 3) - t); 
            u = (u > 0) ? u : -u; v = (v > 0) ? v : -v;
            long res = 2 * (n + (v < u)) + 1;
            printf("%ld\n", res);
        }
    }

    return 0;
}
