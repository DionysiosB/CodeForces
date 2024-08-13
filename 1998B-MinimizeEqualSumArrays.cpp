#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> v(n); for(long p = 1; p < n; p++){scanf("%ld", &v[p]);}
        scanf("%ld", &v[0]);
        for(long p = 0; p < n; p++){printf("%ld ", v[p]);}
        puts("");
    }

}
