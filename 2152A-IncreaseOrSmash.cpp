#include <cstdio>
#include <set>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::set<long> s;
        while(n--){long x; scanf("%ld", &x); s.insert(x);}
        printf("%ld\n", 2 * s.size() - 1);
    }

}
