#include <cstdio>
#include <iostream>
#include <vector>

bool haveEnough(std::vector<int64_t> need, std::vector<int64_t> have, int64_t target, int64_t k){
    for(int64_t p = 0; p < have.size(); p++){
        int64_t goal = target * need[p];
        if(goal > have[p]){k -= (goal - have[p]);}
        if(k < 0){return false;}
    }
    return true;
}


int main(){

    int64_t n, k; scanf("%lld %lld\n", &n, &k);
    std::vector<int64_t> a(n, 0);
    std::vector<int64_t> b(n, 0);

    for(int64_t p = 0; p < n; p++){scanf("%lld", &a[p]);}
    for(int64_t p = 0; p < n; p++){scanf("%lld", &b[p]);}

    int64_t l(0), r(2000000000), m(0);
    while(l <= r){
        m = (l + r) / 2;
        if(haveEnough(a, b, m, k)){l = m + 1;}
        else{r = m - 1;}
    }

    if(!haveEnough(a,b,m,k)){--m;}
    printf("%lld\n", m);

    return 0;
}
