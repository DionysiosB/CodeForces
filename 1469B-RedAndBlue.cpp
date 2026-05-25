#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long sr(0), msr(0);
        for(long p = 0; p < n; p++){long x; scanf("%ld", &x); sr += x; msr = (msr > sr) ? msr : sr;}

        long m; scanf("%ld", &m);
        long sb(0), msb(0);
        for(long p = 0; p < m; p++){long x; scanf("%ld", &x); sb += x; msb = (msb > sb) ? msb : sb;}

        printf("%ld\n", msr + msb);
    }

}
