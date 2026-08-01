#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, k, m; scanf("%ld %ld %ld", &n, &k, &m);
        if(k > m){puts("NO"); continue;}

        puts("YES");
        for(long p = 0; p < n; p++){printf("%ld ", p % k ? 1 : (m - k + 1));}
        puts("");
    }

}
