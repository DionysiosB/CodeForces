#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> a(n);
        for(long p = 0; p < n; p++){
            scanf("%ld", &a[p]);
            if(a[p] == 1){a[p] = 2;}
            if(p && a[p] % a[p - 1] == 0){++a[p];}
        }

        for(long p = 0; p < n; p++){printf("%ld ", a[p]);}
        puts("");
    }

}
