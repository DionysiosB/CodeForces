#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> s(n + 1); for(long p = 1; p <= n; p++){scanf("%ld", &s[p]);}
        std::vector<long> a(n + 1, 1);
        long mx(1);
        for(long p = 1; p <= n; p++){
            for(long q = 2 * p; q <= n; q += p){
                if(s[p] < s[q]){
                    a[q] = (a[q] > (a[p] + 1)) ? a[q] : (a[p] + 1);
                    mx = (mx > a[q]) ? mx : a[q];
                }
            }
        }

        printf("%ld\n", mx);
    }

    return 0;
}
