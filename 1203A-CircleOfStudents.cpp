#include <cstdio>

int main(){

    long q; scanf("%ld", &q);
    while(q--){
        long n; scanf("%ld", &n);
        bool up(true), down(true);
        long prev; scanf("%ld", &prev);
        for(long p = 1; p < n; p++){
            long x; scanf("%ld", &x);
            if(up){
                if(x == prev + 1){}
                else if(x == 1 && prev == n){}
                else{up = false;}
            }
            if(down){
                if(x == prev - 1){}
                else if(x == n && prev == 1){}
                else{down = false;}
            }
            prev = x;
        }

        puts(up || down ? "YES" : "NO");
    }

    return 0;
}
