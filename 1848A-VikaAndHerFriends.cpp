#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, m, k; scanf("%ld %ld %ld", &n, &m, &k);
        long a, b; scanf("%ld %ld", &a, &b);
        bool target = (a + b) % 2;
        bool ans(true);
        for(long p = 0; p < k; p++){
            long x, y; scanf("%ld %ld", &x, &y);
            bool cur = (x + y) % 2;
            if(cur == target){ans = false;}
        }

        puts(ans ? "YES" : "NO");
    }

}
