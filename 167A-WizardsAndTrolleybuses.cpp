#include<cstdio>
#include<cmath>
typedef long long ll;

int main(){

    ll n, a, d; scanf("%lld %lld %lld", &n, &a, &d);
    double y(-1), x(0);
    while(n--){
        ll t, v; scanf("%lld %lld", &t, &v);

        if(2 * d * a > v * v){x=0.5 * v / a + 1.0 * d / v;}
        else{x=sqrt(2.0 * d / a);}
        x += t;
        y = (y > x) ? y : x;
        printf("%.5lf\n", y);
    }

    return 0;
}
