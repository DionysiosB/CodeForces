#include <cstdio>
#include <iostream>
#include <vector>

std::vector<long> factors(long x){

    std::vector<long> f;
    for(long p = 2; p * p < x; p++){while(x % p == 0){f.push_back(p); x /= p;}}
    if(x > 1){f.push_back(x);}
    return f;
}


int main(){

    const int64_t MOD = 1000000007;
    int64_t t, l, r; scanf("%lld %lld %lld", &t, &l, &r);
    std::vector<int64_t> tv(r + 1, 1);
    for(int64_t p = 1; p <= r; p++){tv[p] = (tv[p - 1] * t) % MOD;}

    std::vector<int64_t> fv(r + 1, 0);
    for(int64_t p = 1; p <= r; p++){


    }




    return 0;
}
