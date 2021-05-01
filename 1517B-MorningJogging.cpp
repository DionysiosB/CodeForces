#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, m; scanf("%ld %ld", &n, &m);
        std::vector<long> a(n * m); for(long p = 0; p < m * n; p++){scanf("%ld", &a[p]);}
        sort(a.begin(), a.end());
        for(long p = 0; p < m * n; p++){
            printf("%ld ", a[p]);
            if((p + 1) % m == 0){puts("");}
        }
    }

}
