#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> v;
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            if(!v.empty() && v.back() > x){v.push_back(x);}
            v.push_back(x);
        }

        printf("%ld\n", v.size());
        for(long p = 0; p < v.size(); p++){printf("%ld ", v[p]);}
        puts("");
    }

}
