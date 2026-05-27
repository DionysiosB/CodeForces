#include <cstdio>
typedef long long ll;

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        ll m; scanf("%lld", &m);
        ll d(1); while(10 * d <= m){d *= 10;}
        printf("%lld\n", m - d);
    }

}
