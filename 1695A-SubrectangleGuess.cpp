#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, m; scanf("%ld %ld", &n, &m);
        long mx(-1e9 - 7), mxrow(-1), mxcol(-1);
        for(long row = 0; row < n; row++){
            for(long col = 0; col < m; col++){
                long x; scanf("%ld", &x);
                if(mx < x){mx = x; mxrow = row; mxcol = col;}
            }
        }

        long ha = mxrow + 1; long hb = n - mxrow; long h = (ha > hb) ? ha : hb;
        long wa = mxcol + 1; long wb = m - mxcol; long w = (wa > wb) ? wa : wb;
        printf("%ld\n", h * w);
    }

}
