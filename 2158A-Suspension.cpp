#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long y, r; scanf("%ld %ld", &y, &r);
        long sp((y / 2) + r);
        sp = (sp < n ? sp : n);
        printf("%ld\n", sp);
    }
    
}
