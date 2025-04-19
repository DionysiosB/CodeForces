#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, m, l, r; scanf("%ld %ld %ld %ld", &n, &m, &l, &r);
        long left = (l > -m ? l : -m);
        long right = left + m;
        printf("%ld %ld\n", left, right);
    }

}
