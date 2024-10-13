#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> v(n); for(long p = 0; p < n; p++){scanf("%ld", &v[p]);}
        long cnt(0), last(v.back());
        for(long p = n - 1; p >= 0; p--){
            if(v[p] <= last){continue;}
            ++cnt;
            last = v[p];
        }

        printf("%ld\n", cnt);
    }

}
