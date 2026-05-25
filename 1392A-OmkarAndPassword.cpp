#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long prev(0);
        bool same(true);
        for(long p = 0; p < n; p++){
            long a; scanf("%ld", &a);
            if(prev > 0 && a != prev){same = false;}
            prev = a;
        }

        printf("%ld\n", same ? n : 1);
    }

    return 0;
}
