#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        std::vector<int> v(101);

        long n; scanf("%ld", &n);
        for(long p = 0; p < n; p++){
            long a; scanf("%ld", &a);
            ++v[a];
        }
        long cnt(0);
        for(long p = 0; p <= 100; p++){cnt += v[p] / 3;}
        printf("%ld\n", cnt);
    }

}
