#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld\n", &n);
        long w(1); std::vector<long> v;
        while(n > 0){
            if(n % 10){v.push_back(w * (n % 10));}
            n /= 10; w *= 10;
        }

        printf("%ld\n", v.size());
        for(long p = 0; p < v.size(); p++){printf("%ld ", v[p]);}
        puts("");
    }

    return 0;
}
