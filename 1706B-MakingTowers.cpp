#include <cstdio>
#include <vector>
typedef long long ll;

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> last(n + 1, -1), cnt(n + 1, 0), height(n + 1, 0);

        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            if((last[x] < 0) || (p - last[x]) % 2){
                ++cnt[x];
                height[x] = (height[x] > cnt[x]) ? height[x] : cnt[x];
                last[x] = p;
            }
        }

        for(long p = 1; p <= n; p++){printf("%ld ", height[p]);}
        puts("");
    }
}
