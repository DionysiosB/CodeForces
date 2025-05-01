#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long la, ra, lb, rb; scanf("%ld %ld %ld %ld", &la, &ra, &lb, &rb);
        long mn = (la > lb) ? la : lb;
        long res = (mn <= ra && mn <= rb) ? mn : (la + lb);
        printf("%ld\n", res);
    }

}
