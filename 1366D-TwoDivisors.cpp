#include <cstdio>
#include <vector>

int main(){

    const long B = 1e7 + 9;
    std::vector<bool> v(B, 1);
    v[0] = v[1] = 0;
    for(long p = 2; p * p <= B; p++){
        if(!v[p]){continue;}
        for(long q = 2 * p; q < B; q += p){v[q] = 0;}
    }

    std::vector<long> w;
    for(long p = 0; p < B; p++){
        if(!v[p]){continue;}
        w.push_back(p);
    }

    long n; scanf("%ld", &n);
    std::vector<long> a(n, -1), b(n, -1);
    for(long p = 0; p < n; p++){
        long x; scanf("%ld", &x);
        std::vector<long> f;
        for(long y : w){
            if(y * y > x){break;}
            if(x % y){continue;}
            if(f.size() < 2){f.push_back(y);}
            else{f.back() *= y;}
            while(x % y == 0){x /= y;}
        }

        if(x > 1){
            if(f.size() < 2){f.push_back(x);}
            else{f.back() *= x;}
        }

        if(f.size() > 1){a[p] = f[0]; b[p] = f[1];}
    }

    for(long p = 0; p < n; p++){printf("%ld ", a[p]);}; puts("");
    for(long p = 0; p < n; p++){printf("%ld ", b[p]);}; puts("");
}
