#include <cstdio>
#include <set>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, x; scanf("%ld %ld", &n, &x);
        std::set<long> s; long mx(0);
        for(long p = 0; p < n; p++){
            long cur; scanf("%ld", &cur);
            s.insert(cur);
            mx = (mx > cur) ? mx : cur;
        }

        long cnt = s.count(x) ? ((x + mx - 1) / mx) : 1;
        if(s.count(x)){cnt = 1;}
        printf("%ld\n", cnt);
    }

    return 0;
}
