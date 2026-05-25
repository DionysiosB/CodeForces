#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
        long idx(-1);
        for(long p = 1; p < n - 1; p++){
            if(a[n - 1] >= a[0] + a[p]){idx = p + 1; break;}
        }

        if(idx > 0){printf("1 %ld %ld\n", idx, n);}
        else{puts("-1");}
    }

    return 0;
}
