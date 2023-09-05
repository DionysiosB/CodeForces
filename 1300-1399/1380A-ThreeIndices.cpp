#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long pprev; scanf("%ld", &pprev);
        long prev; scanf("%ld", &prev);
        long idx(0);
        for(long p = 2; p < n; p++){
            long x; scanf("%ld", &x);
            if(pprev < prev && prev > x){idx = p;}
            pprev = prev; prev = x;
        }

        if(idx){printf("YES\n%ld %ld %ld\n", idx - 1, idx, idx + 1);}
        else{puts("NO");}
    }

    return 0;
}
