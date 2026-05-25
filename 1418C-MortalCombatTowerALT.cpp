#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long cnt; scanf("%ld", &cnt);
        int prev(0), pprev(0);
        for(long p = 1; p < n; p++){
            int x; scanf("%d", &x);
            if(pprev && prev && x){++cnt; x = 0;}
            pprev = prev; prev = x;
        } //Count number of three 1's in a row

        printf("%ld\n", cnt);
    }

}
