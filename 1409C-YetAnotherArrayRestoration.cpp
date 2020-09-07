#include <cstdio>

int main(){

    const long N = 50;
    long t; scanf("%ld", &t);
    while(t--){
        long n, x, y; scanf("%ld %ld %ld", &n, &x, &y);
        long start(0), step(0), mx(1e9);

        for(long s = 1; s <= x; s++){
            for(long d = 1; d <= y - x; d++){
                bool hasx = ((x - s) % d == 0) && ((x - s) / d < n);
                bool hasy = ((y - s) % d == 0) && ((y - s) / d < n);
                if((!hasx) || (!hasy)){continue;}
                long last = s + (n - 1) * d;
                if(last < mx){mx = last; start = s; step = d;}
            }
        }

        for(long p = 0; p < n; p++){printf("%ld ", start + p * step);}
        puts("");
    }

    return 0;
}
