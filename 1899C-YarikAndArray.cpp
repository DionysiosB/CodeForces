#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);

        long prev(0), cs(0), mxs(-1007);
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            if( (prev + x) % 2 == 0 || cs < 0){cs = 0;}
            cs += x;
            mxs = (mxs > cs ? mxs : cs);
            prev = (x % 2);
            //printf("p:%ld\tx:%ld\tcs:%ld\tmxs:%ld\n", p, x, cs, mxs);
        }

        printf("%ld\n", mxs);
    }

}
