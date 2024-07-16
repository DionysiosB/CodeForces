#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long x, y, k; scanf("%ld %ld %ld", &x, &y, &k);
        long res(0);
        while(k && x != 1){
            long long d = (x / y + 1) * y - x;
            if(!d){d = 1;}
            if(d > k){d = k;}
            x += d;
		    while(x % y == 0){x /= y;}
		    k -= d;
        }

        printf("%ld\n", x + k % (y - 1));
    }

}
