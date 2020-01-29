#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long a, b; scanf("%ld %ld", &a, &b);
        long diff = (a < b) ? (b - a) : (a - b);
        long cnt = (diff / 5) + (diff % 5 > 0) + (diff % 5 > 2);
        printf("%ld\n", cnt);
    }

    return 0;
}
