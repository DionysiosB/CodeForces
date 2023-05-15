#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, k; scanf("%ld %ld", &n, &k);
        long same(-1);
        for(long p = 0; 2 * p <= n; p++){
            long tst = p * (p - 1) / 2 + (n - p) * (n - p - 1) / 2;
            if(tst == k){same = p; break;}
        }

        if(same < 0){puts("NO");}
        else{
            puts("YES");
            for(long p = 0; p < n; p++){printf("%d ", p < same ? 1 : -1);}
            puts("");
        }
    }

}
