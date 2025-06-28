#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> v(n); for(long p = 0; p < n; p++){scanf("%ld", &v[p]);}
        long long suffix(0), total(0);
        for(long p = n - 1; p >= 0; p--){
            suffix += v[p];
            total += suffix * (suffix > 0);  //Only add if the suffix is positive
        }

        total += suffix * (suffix < 0);  //Need to add all elements at least once
        printf("%lld\n", total);
    }

}
