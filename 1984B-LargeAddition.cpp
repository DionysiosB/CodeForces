#include <cstdio>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll x; scanf("%lld", &x);
        bool possible(true);
        if(x % 10 == 9){possible = false;}
        x /= 10;
        while(possible && x > 9){
            if(x % 10 == 0){possible = false; break;}
            x /= 10;
        }
        possible = possible && (x == 1);
        puts(possible ? "YES" : "NO");
    }

}
