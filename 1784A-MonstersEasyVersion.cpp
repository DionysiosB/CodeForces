#include <cstdio>
#include <vector>
#include <algorithm>
typedef long long ll;

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> h(n); for(long p = 0; p < n; p++){scanf("%ld", &h[p]);}
        sort(h.begin(), h.end());
        ll cnt(0);
        for(long p = 0; p < n; p++){
            long prev = (p ? h[p - 1] : 0);
            if(h[p] > prev + 1){cnt += h[p] - (prev + 1); h[p] = prev + 1;}
        }

        printf("%lld\n", cnt);
    }

}
