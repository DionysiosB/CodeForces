#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long s; scanf("%ld", &s);
        bool possible(true);
        for(long p = 1; p < n; p++){
            long x; scanf("%ld", &x);
            if(x % s){possible = false;}
        }

        puts(possible ? "YES" : "NO");
    }

}
