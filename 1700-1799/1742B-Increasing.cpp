#include <cstdio>
#include <set>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::set<long> s;
        long ans(true);
        while(n--){
            long x; scanf("%ld", &x);
            if(s.count(x)){ans = false;}
            s.insert(x);
        }

        puts(ans ? "YES" : "NO");
    }

}
