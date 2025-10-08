#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
        sort(a.rbegin(), a.rend());
        if(a[0] == a.back()){puts("NO"); continue;}
        else{
            printf("YES\n%ld ", a.back());
            for(long p = 0; p < n - 1; p++){printf("%ld ", a[p]);}
            puts("");
        }

    }

}
