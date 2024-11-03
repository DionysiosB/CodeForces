#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long prev; scanf("%ld", &prev);
        bool perfect(true);
        for(long p = 1; p < n; p++){
            long x; scanf("%ld", &x);
            long diff = x - prev;
            if(diff < 0){diff = -diff;}
            if(diff != 5 && diff != 7){perfect = false;}
            prev = x;
        }

        puts(perfect ? "YES" : "NO");
    }

}
