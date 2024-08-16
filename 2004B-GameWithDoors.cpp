#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long l, r; scanf("%ld %ld", &l, &r);
        long L, R; scanf("%ld %ld", &L, &R);
        long mxl = (l > L ? l : L);
        long mnr = (r < R ? r : R);
        long dist = mnr - mxl;
        dist = (dist > 0 ? dist : 0);
        printf("%ld\n", dist);
    }

}
