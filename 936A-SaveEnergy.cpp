#include <cstdio>
typedef long long ll;

int main(){

    ll k, d; double t; scanf("%lld %lld %lf", &k, &d, &t);

    if(d < k){ll u = (k + d - 1) / d; d *= u;}
    double sp = k + 0.5 * (d - k);
    ll periods = t / sp;
    double res = d * periods;
    t -= periods * sp;

    if(t < k){res += t;}
    else if(t <= sp){res += k + 2 * (t - k);}

    printf("%.1lf\n", res);

    return 0;
}
