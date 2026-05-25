#include <cstdio>
#include <set>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, x; scanf("%ld %ld", &n, &x);
        long mx(0); bool found(false);
        for(long p = 0; p < n; p++){
            long z; scanf("%ld", &z); mx = (mx > z) ? mx : z;
            if(z == x){found = true; break;}
        }
        long u = (x + mx - 1) / mx;
        u = (u > 2) ? u : 2;
        printf("%ld\n", found ? 1 : u);
    }

    return 0;
}
