#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> a(n); for(long &x : a){scanf("%ld", &x);}
        std::vector<long> b(a); sort(b.begin(), b.end());
        long k(-1);
        for(long p = 0; p < n; ++p){
            if(a[p] == b[p]){continue;}
            long fa(a[p] - b[0]);
            long fb(b.back() - a[p]);
            long f(fa > fb ? fa : fb);
            if(k < 0 || f < k){k = f;}
        }

        printf("%ld\n", k);
    }

}
