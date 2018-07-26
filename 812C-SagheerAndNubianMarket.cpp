#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>

int64_t getCost(std::vector<int64_t> a, int64_t k){

    std::vector<int64_t> b(a);
    for(int64_t p = 0; p < b.size(); p++){b[p] += k * (p + 1);}
    sort(b.begin(), b.end());
    int64_t cost(0);
    for(int64_t p = 0; p < k; p++){cost += b[p];}
    return cost;
}



int main(){

    int64_t n, s; scanf("%lld %lld", &n, &s);
    std::vector<int64_t> a(n); 
    for(int64_t p = 0; p < n; p++){scanf("%lld", &a[p]);}

    int64_t left(0), right(n), num(0), spent(0);
    while(left <= right){
        int64_t mid = (left + right) / 2;
        int64_t cost = getCost(a, mid);
        if(cost <= s){left = mid + 1; num = mid; spent = cost;}
        else{right = mid - 1;}
    }

    printf("%lld %lld\n", num, spent);

    return 0;
}
