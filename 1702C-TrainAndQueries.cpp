#include <cstdio>
#include <vector>
#include <map>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, k; scanf("%ld %ld", &n, &k);
        std::vector<long> s(n); for(long p = 0; p < n; p++){scanf("%ld", &s[p]);}
        std::map<long, long> first, last;
        for(long p = 0; p < n; p++){
            last[s[p]] = p;
            if(first.count(s[p]) == 0){first[s[p]] = p;}
        }

        while(k--){
            long x, y; scanf("%ld %ld", &x, &y);
            bool res = (first.count(x)) && (last.count(y)) && (first[x] <= last[y]);
            puts(res ? "YES" : "NO");
        }

    }

}
