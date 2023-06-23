#include <cstdio>
typedef long long ll;

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        ll n, k, g; scanf("%lld %lld %lld", &n, &k, &g);
        ll first = (n - 1) * ((g - 1) / 2);
        ll last = k * g - first; 
        if(last < 0){last = 0;}
        else{last += g / 2;}
        ll saved = (k - (last / g)) * g;
        printf("%lld\n", saved);
    }

}
