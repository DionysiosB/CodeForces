#include <cstdio>

int main(){
    
    long t; scanf("%ld", &t);
    while(t--){
        long k, q; scanf("%ld %ld", &k, &q);
        long a; scanf("%ld", &a); --a;
        long x; while(--k){scanf("%ld", &x);} //discard
        while(q--){scanf("%ld", &x); printf("%ld ", a < x ? a : x);}
        puts("");
    }

}
