#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
        bool valid(true);
        for(long p = 0; valid && p + 2 < n; p++){
            if(a[p] < 0){valid = false;}
            a[p + 1] -= 2 * a[p];
            a[p + 2] -= a[p];
        }

        valid = valid && !a[n - 2] && !a[n - 1];
        puts(valid ? "YES" : "NO");
    }

}
