#include <cstdio>
#include <iostream>
#include <vector>

bool check(std::vector<int64_t> a, int64_t m, int64_t budget){

    int64_t index(0); --budget;
    for(int64_t p = 0; p < m; p++){
        int64_t t = budget - index;
        while(t > 0){
            if(index >= a.size()){return true;}
            if(a[index] <= t){t -= a[index]; a[index] = 0; ++index; --t;}
            else{a[index] -= t; t = 0;}
        }
    }

    if(a.back() == 0){return true;}
    return false;
}


int main(){

    int64_t n, m; scanf("%lld %lld", &n, &m);
    std::vector<int64_t> a(n, 0);
    for(int64_t p = 0; p < n; p++){scanf("%lld", &a[p]);}
    while(a.back() == 0){a.pop_back();}
    int64_t left(a.size()), right(1e16), time(1e16);
    while(left <= right){
        int64_t cand = (left + right) / 2;
        if(check(a, m, cand)){time = cand; right = cand - 1;}
        else{left = cand + 1;}
    }

    printf("%lld\n", time);

    return 0;
}
