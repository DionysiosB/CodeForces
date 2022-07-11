#include <cstdio>
#include <vector>

const long N = 35;

int main(){

    long x; scanf("%ld", &x);
    std::vector<int> v(N, 0);
    for(long p = 0; p < N; p++){v[p] = x % 2; x /= 2;}
    std::vector<long> pos; long cnt(0);
    long idx(N - 1); while(!v[idx]){--idx;}
    for(;idx >= 0; idx--){
        if(v[idx]){continue;}
        ++cnt; pos.push_back(idx + 1);
        for(long p = 0; p <= idx; p++){v[p] = 1 - v[p];}
        if(idx == 0){break;}
        bool done(true);
        for(long p = 0; p < idx; p++){if(v[p] == 0){done = false; break;}}
        if(done){break;}
        ++cnt; bool carry = 1;
        for(long p = 0; p < idx; p++){v[p] += carry; carry = (v[p] > 1); v[p] %= 2;} 
    }

    printf("%ld\n", cnt);
    for(long p = 0; p < pos.size(); p++){printf("%ld ", pos[p]);}
    puts("");

    return 0;
}
