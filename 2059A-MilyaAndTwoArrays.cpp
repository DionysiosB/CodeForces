#include <cstdio>
#include <set>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::set<long> a, b;
        for(long p = 0; p < n; p++){long x; scanf("%ld", &x); a.insert(x);}
        for(long p = 0; p < n; p++){long x; scanf("%ld", &x); b.insert(x);}
        puts(a.size() * b.size() >= 3 ? "YES" : "NO");
    }

}
