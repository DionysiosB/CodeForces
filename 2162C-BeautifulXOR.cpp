#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long a, b; scanf("%ld %ld", &a, &b);
        long x(a ^ b); std::vector<long> v;
        for(long p = 0; x && p < 100; p++, x /= 2){
            if(x % 2 == 0){continue;}
            if((1 << p) > a){break;}
            v.push_back(1 << p);
        }
        if(x){puts("-1"); continue;}
        printf("%ld\n", v.size());
        if(v.empty()){continue;}
        for(long p = 0; p < v.size(); p++){printf("%ld ", v[p]);}
        puts("");
    }

}
