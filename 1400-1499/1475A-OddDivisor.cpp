#include <cstdio>
typedef long long ll;

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        while(n % 2 == 0){n /= 2;}
        puts(n > 1 ? "YES" : "NO");
    }

}
