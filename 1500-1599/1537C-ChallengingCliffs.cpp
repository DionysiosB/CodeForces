#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> h(n); for(long p = 0; p < n; p++){scanf("%ld", &h[p]);}
        sort(h.begin(), h.end());
        long mindiff(1e9 + 7), pos(-1), left(-1), right(-1);
        for(long p = 1; p < n; p++){
            long diff = h[p] - h[p - 1];
            if(diff < mindiff){mindiff = diff; pos = p; left = h[p - 1]; right = h[p];}
        }

        printf("%ld ", left);
        for(long p = pos +  1; p < n; p++){printf("%ld ", h[p]);}
        for(long p = 0; p < pos - 1; p++){printf("%ld ", h[p]);}
        printf("%ld\n", right);
    }

}
