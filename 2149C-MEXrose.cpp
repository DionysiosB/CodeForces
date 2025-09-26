#include <cstdio>
#include <unordered_set>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, k; scanf("%ld %ld", &n, &k);
        std::unordered_set<long> s;
        long w(0);
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            if(x == k){++w;}
            else{s.insert(x);}
        }

        long cnt(0);
        for(long p = 0; p < k; p++){if(!s.count(p)){++cnt;}}
        printf("%ld\n", (cnt > w ? cnt : w));
    }

}
