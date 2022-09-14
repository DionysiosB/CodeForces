#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> v(n); for(long p = 0; p < n; p++){v[p] = p + 1;}
        for(long p = n % 2; p < n - 2; p += 2){
            long tmp = v[p]; v[p] = v[p + 1]; v[p + 1] = tmp;
        }

        for(long p = 0; p < n; p++){printf("%ld ", v[p]);}
        puts("");
    }

}
