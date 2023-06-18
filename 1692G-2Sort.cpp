#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, k; scanf("%ld %ld", &n, &k);
        std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
        long last(0), cnt(0);
        for(long p = 1; p < n; p++){
            if(a[p - 1] >= 2 * a[p]){last = p;}
            else if(p >= last + k){++cnt;}
        }

        printf("%ld\n", cnt);
    }

}
