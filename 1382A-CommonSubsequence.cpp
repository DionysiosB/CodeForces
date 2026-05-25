#include <cstdio>
#include <set>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, m; scanf("%ld %ld", &n, &m);
        std::set<long> s;
        while(n--){long x; scanf("%ld", &x); s.insert(x);}
        bool ans(false);
        long res(0);
        while(m--){
            long x; scanf("%ld", &x);
            if(s.count(x)){ans = true; res = x;}
        }

        if(ans){printf("YES\n1 %ld\n", res);}
        else{puts("NO");}
    }

    return 0;
}
