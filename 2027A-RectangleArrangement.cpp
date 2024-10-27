#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long mxw(0), mxh(0);
        for(long p = 0; p < n; p++){
            long w, h; scanf("%ld %ld", &w, &h);
            mxw = (mxw > w ? mxw : w);
            mxh = (mxh > h ? mxh : h);
        }

        printf("%ld\n", 2 * (mxw + mxh));
    }

}
