#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> a(n + 1); long start(-1), stop(-1);
        for(long p = 1; p <= n; p++){
            scanf("%ld", &a[p]);
            if(start < 0 &&  p != a[p]){start = p;}
            else if(a[p] == start){stop = p;}
        }

        for(long p = 0; start > 0 && 2 * p <= stop - start; p++){
            long tmp = a[start + p];
            a[start + p] = a[stop - p];
            a[stop - p] = tmp;
        }

        for(long p = 1; p <= n; p++){printf("%ld ", a[p]);}
        puts("");
    }

}
