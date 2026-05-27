#include <cstdio>
#include <vector>
#include <algorithm>


int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> v(2 * n);
        for(long p = 0; p < 2 * n; p++){scanf("%ld", &v[p]);}
        sort(v.begin(), v.end());
        for(long p = 0; p < n; p++){printf("%ld %ld ", v[p], v[p + n]);}
        puts("");
    }

}
