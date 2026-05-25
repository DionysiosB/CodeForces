#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, m; scanf("%ld %ld", &n, &m);
        long mn(107), cnt(0), res(0);
        for(long row = 0; row < n; row++){
            for(long col = 0; col < m; col++){
                long x; scanf("%ld", &x);
                if(x < 0){x = -x; ++cnt;}
                mn = (mn < x) ? mn : x; 
                res += x;
            }
        }
        res -= 2 * (cnt % 2) * mn;
        printf("%ld\n", res);
    }
}
