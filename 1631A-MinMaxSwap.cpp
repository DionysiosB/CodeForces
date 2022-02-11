#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
        std::vector<long> b(n); for(long p = 0; p < n; p++){scanf("%ld", &b[p]);}
        long mxa(-1), mxb(-1);
        for(long p = 0; p < n; p++){
            long x = (a[p] < b[p]) ? a[p] : b[p];
            long y = (a[p] > b[p]) ? a[p] : b[p];
            mxa = (mxa > x) ? mxa : x;
            mxb = (mxb > y) ? mxb : y;
        }

        printf("%ld\n", mxa * mxb);
    }

}
