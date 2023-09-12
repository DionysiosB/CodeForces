#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long l, r; scanf("%ld %ld", &l, &r);
        if(r < 4){puts("-1");}
        else if(l == r){
            long first(-1);
            for(long p = 2; p * p <= r; p++){if((r - p) % p == 0){first = p; break;}}
            if(first > 0){printf("%ld %ld\n", first, r - first);}
            else{puts("-1");}
        }
        else{printf("2 %ld\n", r - r % 2 - 2);}
    }

}
