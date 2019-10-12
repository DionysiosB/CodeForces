#include <cstdio>

int main(){
    
    long n; scanf("%ld", &n);
    bool inc(true), possible(true);
    long cur(-1);
    for(long p = 0; p < n; p++){
        long x; scanf("%ld", &x);
        if(inc && x < cur){inc = false;}
        else if(!inc && x > cur){possible = false; break;}
        cur = x;
    }
    
    puts(possible ? "YES" : "NO");
    
    return 0;
}
