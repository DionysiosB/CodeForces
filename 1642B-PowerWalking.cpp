#include <cstdio>
#include <set>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::set<long> s;
        long cnt(0);
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            if(s.count(x)){continue;}
            s.insert(x);
            ++cnt;
        }

        for(long p = 1; p <= n; p++){printf("%ld ", (p > cnt) ? p : cnt);}
        puts("");
    }

}
