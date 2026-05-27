#include <cstdio>
typedef long long ll;

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        ll a, b, n; scanf("%lld %lld %lld", &n, &a, &b); 
        if(b == 1){puts("Yes"); continue;}
        else if(a == 1){puts(n % b == 1 ? "Yes" : "No"); continue;}
        ll u(1); bool ans(false);
        while(u <= n){  //a^k + m * b is a possible (though suboptimal) way to reach n
            if(n % b == u % b){ans = true; break;}
            u *= a;
        }

        puts(ans ? "Yes" : "No");
    }

}
