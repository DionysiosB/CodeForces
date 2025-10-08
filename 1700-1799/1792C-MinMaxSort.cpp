#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> pos(n + 1); 
        for(long p = 1; p <= n; p++){
            long x; scanf("%ld", &x);
            pos[x] = p;
        }

        long left((n + 1) / 2), right((n + 2) / 2);
        while(left > 0 && (left == right || (pos[left] < pos[left + 1] && pos[right - 1] < pos[right]))) {
            --left; ++right;
        }

        printf("%ld\n", (n - (right - left - 1)) / 2);
    }

}
