#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, s; scanf("%ld %ld", &n, &s);
        std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
        std::vector<long> b(n); for(long p = 0; p < n; p++){scanf("%ld", &b[p]);}

        long idx(-1), mxb(0);
        for(long p = 0; p < n; p++){
            if(s < a[p] + p){continue;}
            if(b[p] > mxb){idx = p + 1; mxb = b[p];}
        }

        printf("%ld\n", idx);
    }

}
