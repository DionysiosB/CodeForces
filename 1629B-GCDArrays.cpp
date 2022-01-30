#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long l, r, k; scanf("%ld %ld %ld", &l, &r, &k);
        if(l == r){puts(r > 1 ? "YES" : "NO"); continue;}
        long odds = (r - l + 1) / 2 + ((l % 2) && (r % 2));
        puts(k >= odds ? "YES" : "NO");
    }

}
