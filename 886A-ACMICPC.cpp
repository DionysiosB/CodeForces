#include <cstdio>
#include <vector>

std::vector<long> getBool(long x){

    std::vector<long> a;
    for(long p = 0; p < 10 && x > 0; p++){
        if(x % 2){a.push_back(p);}
        x /= 2;
    }

    return a;
}

int main(){

    const long N = 6;
    const long M = (1 << N);

    std::vector<long> s(N);
    long total(0);
    for(long p = 0; p < N; p++){scanf("%ld", &s[p]); total += s[p];}

    bool possible(false);
    for(long p = 0; p < M; p++){
        std::vector<long> b = getBool(p);
        if(b.size() != N / 2){continue;}
        long sum(0); for(long u = 0; u < N / 2; u++){sum += s[b[u]];}
        if(2 * sum == total){possible = true; break;}
    }

    puts(possible ? "YES" : "NO");

    return 0;
}
