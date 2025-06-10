#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long a, b; scanf("%ld %ld", &a, &b);
        long y = (2 * a - b) / (n + 1);
        long x = y + (b - a);

        bool possible(true);
        if((x < 0) || (y < 0) || (x + n * y != a) || (2 * x + (n - 1) * y != b)){possible = false;}
        for(long p = 2; p < n; p++){
            long u; scanf("%ld", &u);
            if(u != (p + 1) * x + (n - p) * y){possible = false;}
        }

        puts(possible ? "YES" : "NO");
    }

}
