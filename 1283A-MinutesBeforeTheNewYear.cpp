#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long h, m; scanf("%ld %ld", &h, &m);
        long ans = (24 - h) * 60 - m; 
        printf("%ld\n", ans);
    }

    return 0;
}
