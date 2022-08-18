#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
        long cnt(0);
        for(long p = 1; p < n; p++){
            if(a[p - 1] <= a[p]){++cnt;}
            else{break;}
        }
        for(long p = n - 1; p > 0; p--){
            if(a[p - 1] >= a[p]){++cnt;}
            else{break;}
        }
        puts(cnt >= n - 1 ? "YES" : "NO");
    }

}
