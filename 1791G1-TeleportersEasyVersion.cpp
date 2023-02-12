#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, b; scanf("%ld %ld", &n, &b);
        std::vector<long> v(n);
        for(long p = 0; p < n; p++){scanf("%ld", &v[p]); v[p] += p + 1;}
        sort(v.begin(), v.end());
        long cnt(0);
        for(long p = 0; p < n; p++){
            if(v[p] <= b){b -= v[p]; ++cnt;}
            else{break;}
        }
        printf("%ld\n", cnt);
    }

}
