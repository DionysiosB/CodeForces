#include <cstdio>
#include <vector>
#include <unordered_map>
#include <queue>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> f(n, 0);
        std::unordered_map<long, std::deque<long> > md;

        long ans(0);
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            md[x].push_front(p);
            f[p] = p ? f[p - 1] : 0;
            while(md[x].size() > x){md[x].pop_back();}
            if(md[x].size() >= x){
                long posfirst = md[x].back();
                long prev = posfirst ? f[posfirst - 1] : 0;
                long tst = prev + x;
                f[p] = (f[p] > tst ? f[p] : tst);
            }
        }

        printf("%ld\n", f.back());
    }

}
