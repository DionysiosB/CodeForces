#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, x; scanf("%ld %ld", &n, &x);
        long idx(-1); bool possible(true);
        for(long p = 0; p < n; p++){
            int s; scanf("%d", &s);
            if(idx < 0 && s){idx = p;}
            if(s && idx + x <= p){possible = false;}
        }

        puts(possible ? "YES" : "NO");
    }

}
