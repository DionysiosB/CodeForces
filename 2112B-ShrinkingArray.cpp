#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long pprev; scanf("%ld", &pprev);
        long prev; scanf("%ld", &prev);
        int ans = (prev == pprev || prev == pprev + 1 || prev == pprev - 1) ? 0 : -1;
        for(long p = 2; p < n; p++){
            long x; scanf("%ld", &x);
            if(ans < 0){
                if(pprev < prev && prev > x){ans = 1;}
                else if(pprev > prev && prev < x){ans = 1;}
            }

            if(ans){
                if(pprev == prev || prev == x){ans = 0;}
                else if(prev == pprev - 1 || prev == pprev + 1){ans = 0;}
                else if(prev == x - 1 || prev == x + 1){ans = 0;}
            }


            pprev = prev;
            prev = x;
        }

        printf("%d\n", ans);
    }

}
