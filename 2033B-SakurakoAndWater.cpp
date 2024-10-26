#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> v(2 * n - 1);
        for(long row = 0; row < n; row++){
            for(long col = 0; col < n; col++){
                long x; scanf("%ld", &x);
                long idx = (n - 1) + row - col;
                v[idx] = (v[idx] > -x ? v[idx] : -x);
            }
        }

        long total(0);
        for(long p = 0; p < v.size(); p++){total += v[p];}
        printf("%ld\n", total);
    }

}
