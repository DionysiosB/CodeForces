#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, j, k; scanf("%ld %ld %ld", &n, &j, &k);
        long s(-1), mx(-1);
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            if(p + 1 == j){s = x;}
            mx = (mx > x ? mx : x);
        }

        puts( (k == 1 && s < mx) ? "NO" : "YES");
    }

}
