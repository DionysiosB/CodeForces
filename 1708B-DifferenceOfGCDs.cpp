#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, l, r; scanf("%ld %ld %ld", &n, &l, &r);
        std::vector<long> a(n);
        bool possible(true);
        for(long p = 1; p <= n; p++){
            a[p - 1] = (1 + (l - 1) / p) * p;
            if(a[p - 1] > r){possible = false;}
        }

        if(possible){
            puts("YES");
            for(long p = 0; p < n; p++){printf("%ld ", a[p]);}
            puts("");
        }
        else{puts("NO");}
    }

}
