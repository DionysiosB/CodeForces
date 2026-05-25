#include <cstdio>

int main(){

    long q; scanf("%ld", &q);
    while(q--){
        long n, m; scanf("%ld %ld", &n, &m);
        bool possible(true);
        long mn(m), mx(m), prev(0);
        for(long p = 0; p < n; p++){
            long t, d, u; scanf("%ld %ld %ld", &t, &d, &u);
            long diff = t - prev; prev = t;
            mn -= diff; mx += diff; 
            if(mx < d || mn > u){possible = false;}
            mn = (mn > d) ? mn : d;
            mx = (mx < u) ? mx : u;
        }

        puts(possible ? "YES" : "NO");
    }

    return 0;
}
