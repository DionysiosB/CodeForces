#include <cstdio>
#include <cmath>
#include <vector>

int main(){

    const long N = 1000;
    std::vector<long> f;
    for(long p = 0; p < N; p++){f.push_back(p * (p - 1) / 2);}

    long k; scanf("%ld\n", &k);

    char c = 'a';
    if(k == 0){puts("a"); return 0;}
    while(k > 0){
        long rep(0); 
        for(long p = 0; p < f.size(); p++){if(f[p] > k){break;}; rep = p;}
        for(long p = 0; p < rep; p++){printf("%c", c);}
        k -= f[rep]; ++c;
    }
    puts("");

    return 0;
}
