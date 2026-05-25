#include <cstdio>
#include <vector>
#include <set>

int main(){

    long n; scanf("%ld", &n);
    std::vector<long> a(n + 1); for(long p = 1; p <= n; p++){scanf("%ld", &a[p]);}
    for(long p = 1; p <= n; p++){
        std::set<long> s; 
        long cur = p; 
        while(s.count(cur) == 0){s.insert(cur); cur = a[cur];}
        printf("%ld ", cur);
    }
    puts("");
}
