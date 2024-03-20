#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long mna(1e7), mnb(1e7), mxa(-1e7), mxb(-1e7);
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);

            if(x <= mna){mnb = mna; mna = x;}
            else if(x < mnb){mnb = x;}

            if(x >= mxa){mxb = mxa; mxa = x;}
            else if(x > mxb){mxb = x;}
        }

        printf("%ld\n", 2 * (mxa + mxb - mna - mnb));
    }

}

