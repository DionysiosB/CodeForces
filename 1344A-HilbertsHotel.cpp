#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<bool> b(n); 
        bool ans(true);
        for(long p = 0; p < n; p++){
            long a; scanf("%ld", &a);
            long to = (p + (n + (a % n))) % n;
            if(b[to]){ans = false;}
            b[to] = 1;
        }
        puts(ans ? "YES" : "NO");
    }

    return 0;
}
