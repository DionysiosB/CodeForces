#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, m; scanf("%ld %ld", &n, &m);
        bool possible(false);
        for(long p = 0; p < n; p++){
            long w, x, y, z; scanf("%ld%ld%ld%ld", &w, &x, &y, &z);
            if(x == y){possible = true;}
        }
        
        if(m % 2){possible = false;}
        puts(possible ? "YES" : "NO");
    }

    return 0;
}
