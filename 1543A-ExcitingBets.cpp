#include <cstdio>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll a, b; scanf("%lld %lld", &a, &b);
        ll mn = (a < b) ? a : b;
        ll mx = (a > b) ? a : b;
        ll g = mx - mn;
        if(g == 0){puts("0 0"); continue;}
        ll stepsA = (g + (g - mn) % g) % g;
        ll stepsB = (mn % g);
        ll steps = (stepsA < stepsB) ? stepsA : stepsB;

        printf("%lld %lld\n", g, steps);
    }


}
