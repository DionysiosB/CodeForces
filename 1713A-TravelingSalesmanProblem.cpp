#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long xp(0), xn(0), yp(0), yn(0);
        for(long p = 0; p < n; p++){
            long x, y; scanf("%ld %ld", &x, &y);
            if(x == 0 && y >= 0){yp = (yp > y) ? yp : y;}
            else if(x == 0 && y <= 0){y = -y; yn = (yn > y) ? yn : y;}
            else if(x >= 0 && y == 0){xp = (xp > x ? xp : x);}
            else if(x <= 0 && y == 0){x = -x; xn = (xn > x ? xn : x);}
        }

        long res = 2 * (xp + xn + yp + yn);
        printf("%ld\n", res);
    }

}
