#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
        for(long p = n - 2; p >= 0; p -= 2){if(a[p + 1] < a[p]){long x = a[p]; a[p] = a[p + 1]; a[p + 1] = x;}}
        bool sorted(true);
        for(long p = 1; sorted && p < n; p++){
            if(a[p - 1] > a[p]){sorted = false;}
        }

        puts(sorted ? "YES" : "NO");
    }

}
