#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long pprev(0), prev(0);
        bool possible(true);
        for(long p = 2; p < n; p++){
            long x; scanf("%ld", &x);
            if(pprev && !prev && x){possible = false;}
            pprev = prev;
            prev = x;
        }

        puts(possible ? "YES" : "NO");

    }

}
