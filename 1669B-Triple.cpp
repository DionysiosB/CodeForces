#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> v(n); for(long p = 0; p < n; p++){scanf("%ld", &v[p]);}
        sort(v.begin(), v.end());
        long res(-1);
        for(long p = 2; p < n; p++){
            if(v[p - 2] == v[p] && v[p - 1] == v[p]){res = v[p]; break;}
        }

        printf("%ld\n", res);
    }

}
