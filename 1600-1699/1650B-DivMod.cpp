#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long l, r, a; scanf("%ld %ld %ld", &l, &r, &a);
        long d = r / a;
        long m = r % a;
        long res = d + m;
        long prev = (d - 1) * a + (a - 1);
        if(prev >= l){
            long tmp = (d - 1) + (a - 1);
            res = (res > tmp) ? res : tmp;
        }

        printf("%ld\n", res);
    }

}
