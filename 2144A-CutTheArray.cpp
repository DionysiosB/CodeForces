#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> v(n); long tm(0);
        for(long p = 0; p < n; p++){scanf("%ld", &v[p]); tm = (tm + v[p]) % 3;}
        printf("%d %d\n", tm ? 0 : 1, tm ? 0 : 2);
    }

}
