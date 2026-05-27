#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long l, r; scanf("%ld %ld", &l, &r);
        long cnt(0);
        while(r){
            cnt += (r - l);
            r /= 10; l /= 10;
        }
        printf("%ld\n", cnt);
    }

}
