#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, k; scanf("%ld %ld", &n, &k);
        std::vector<long> a(n + 2, 0);
        for(long p = 0; p < n; p++){long x; scanf("%ld", &x); ++a[x];}
        long mex(n + 2);
        for(long p = 0; p < a.size(); p++){
            if(a[p] > k && a[p + 1]){a[p + 1] += (a[p] - k);}
            else if(a[p] < k){mex = p; break;}
        }

        printf("%ld\n", mex);
    }

}
