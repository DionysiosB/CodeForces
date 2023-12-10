#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, k; scanf("%ld %ld", &n, &k);
        long prev(0); bool sorted(true);
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            if(prev > x){sorted = false;}
            prev = x;
        }

        bool res = sorted || k > 1;
        puts(res ? "YES" : "NO");
    }

}
