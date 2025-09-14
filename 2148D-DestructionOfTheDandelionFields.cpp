#include <cstdio>
#include <vector>
#include <algorithm>


int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> v; long long total(0);
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            if(x % 2){v.push_back(x);}
            else{total += x;}
        }

        if(!v.size()){puts("0"); continue;}
        sort(v.rbegin(), v.rend());
        for(long p = 0; 2 * p < v.size(); p++){total += v[p];}
        printf("%lld\n", total);
    }

}
