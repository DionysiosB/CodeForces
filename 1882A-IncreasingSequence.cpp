#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
        long b(0);
        for(long p = 0; p < n; p++){++b; if(b == a[p]){++b;}}
        printf("%ld\n", b);
    }

}
