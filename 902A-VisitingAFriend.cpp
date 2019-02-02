#include <cstdio>

int main(){

    long n, m; scanf("%ld %ld", &n, &m);
    long x(0);
    bool possible(false);
    for(long p = 0; p < n; p++){
        long a, b; scanf("%ld %ld", &a, &b);
        if(a <= x){x = (x > b) ? x : b;}
        if(m <= x){possible = true; break;}
    }

    puts(possible ? "YES" : "NO");

    return 0;
}
