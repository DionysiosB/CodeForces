#include <cstdio>
#include <vector>
#include <set>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> v;
        std::set<long> s;
        for(long p = 0; p < 2 * n; p++){
            long x; scanf("%ld", &x);
            if(s.count(x)){continue;}
            v.push_back(x);
            s.insert(x);
        }

        for(long p = 0; p < n; p++){printf("%ld ", v[p]);}
        puts("");
    }

    return 0;
}
