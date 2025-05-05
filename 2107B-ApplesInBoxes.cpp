#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, k; scanf("%ld %ld", &n, &k);
        long mna(1e9 + 7), mxa(0), cntmx(0), s(0);

        for(int p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            s = (s + x) % 2;
            if(x > mxa){mxa = x; cntmx = 1;}
            else if(x == mxa){++cntmx;}
            mna = (mna < x ? mna : x);
        }

        if( (mxa > mna + k + 1) || ( (mxa == mna + k + 1) && (cntmx > 1)) ){puts("Jerry");}
        else{puts(s ? "Tom" : "Jerry");}
    }

}
