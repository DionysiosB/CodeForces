#include <cstdio>
#include <vector>
#include <set>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::set<long> s; s.insert(0);
        for(long p = 1; p * p <= n; p++){s.insert(p); s.insert(n / p);}
        printf("%ld\n", s.size());
        for(std::set<long>::iterator it = s.begin(); it != s.end(); it++){printf("%ld ", *it);}
        puts("");
    }

    return 0;
}
