#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, k; scanf("%ld %ld", &n, &k);
        long sprev; scanf("%ld", &sprev);
        long aprev( (sprev + (sprev > 0) * (n - k)) / (n - k + 1) );
        bool possible(true);

        for(long p = 1; p < k; p++){
            long s; scanf("%ld", &s);
            long a = s - sprev;
            if(a < aprev){possible = false;}
            sprev = s;
            aprev = a;
        }

        puts(possible ? "YES" : "NO");
    }

}
