#include <cstdio>
#include <vector>

int main(){

    long n, k; scanf("%ld %ld", &n, &k);
    long cnt(0); std::vector<long> w;
    bool possible(true);
    if(n < k){possible = false;}
    while(n){w.push_back(n % 2); cnt += (n % 2); n /= 2;}
    if(cnt > k){possible = false;}
    if(!possible){puts("NO"); return 0;}
    puts("YES");
    
    for(long p = w.size() - 1; p > 0 && cnt < k; p--){
        while(w[p] && cnt < k){--w[p]; w[p - 1] += 2; ++cnt;}
    }

    long u = 1;
    for(long p = 0; p < w.size(); p++){
        for(long q = 0; q < w[p]; q++){printf("%ld ", u);}
        u *= 2;
    }

    puts("");

    return 0;
}
