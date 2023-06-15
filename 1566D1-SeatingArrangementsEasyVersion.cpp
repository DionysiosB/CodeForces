#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, m; scanf("%ld %ld", &n, &m);
        std::vector<long> v; //n is trivially 1 in every case
        long cnt(0);
        while(m--){
            long x; scanf("%ld", &x);
            for(long p = 0; p < v.size(); p++){cnt += (v[p] < x);}
            v.push_back(x);
        }

        printf("%ld\n", cnt);
    }

}
