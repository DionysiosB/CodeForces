#include <cstdio>
typedef long long ll;

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        ll n, x, y; scanf("%lld %lld %lld", &n, &x, &y);
        ll v(0);
        while(n--){
            long u; scanf("%ld", &u);
            v += (u % 2); v %= 2;
        }

        if( ((v ^ x) % 2) == (y % 2)){puts("Alice");}
        else{puts("Bob");}
    }

}
