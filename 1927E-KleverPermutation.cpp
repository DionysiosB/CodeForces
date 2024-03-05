#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, k; scanf("%ld %ld", &n, &k);
        std::vector<long> v(n, 0);
        long a(1), b(n);
        for(long p = 0; p < k; p++){
            for(long q = p; q < n; q += k){
                if(p % 2){v[q] = b--;}
                else{v[q] = a++;}
            }
        }

        for(long p = 0; p < n; p++){printf("%ld ", v[p]);}
        puts("");
    }

}
