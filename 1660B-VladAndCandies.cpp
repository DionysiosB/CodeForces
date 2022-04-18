#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long mxa(0), mxb(0);
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            if(x >= mxa){mxb = mxa; mxa = x;}
            else if(x > mxb){mxb = x;}
        }

        puts(mxa <= mxb + 1 ? "YES" : "NO");}

}
