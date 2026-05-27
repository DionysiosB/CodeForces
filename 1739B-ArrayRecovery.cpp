#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> a(n); bool unique(true);
        scanf("%ld", &a[0]);
        for(long p = 1; p < n; p++){
            long x; scanf("%ld", &x);
            if(x && x <= a[p - 1]){unique = false;}
            a[p] = a[p - 1] + x;
        }

        if(unique){
            for(long p = 0; p < n; p++){printf("%ld ", a[p]);}
            puts("");
        }
        else{puts("-1");}
    }

}
