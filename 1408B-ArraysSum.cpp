#include <cstdio>
#include <set>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, k; scanf("%ld %ld", &n, &k);
        std::set<long> s; for(long p = 0; p < n; p++){long a; scanf("%ld", &a); s.insert(a);}
        if(k == 1){printf("%ld\n", 1L - 2 * (s.size() > 1));}
        else{
            long ans = (s.size() - 1 + k - 2) / (k - 1);
            ans = (ans > 0) ? ans : 1;
            printf("%ld\n", ans);
        }
    }

    return 0;
}
