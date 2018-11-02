#include <cstdio>
#include <vector>

bool f(std::vector<long> &a, long k){

    if(a.size() <= 1 && k > 1){return false;}
    if(k < 0 || k % 2 == 0){return false;}
    k--;
    if(k == 0){return true;}
    std::vector<long> lv, rv;
    for(long p = 0; p < a.size(); p++){
        if(p < (a.size() + 1) / 2){lv.push_back(a[p]);}
        else{rv.push_back(a[p]);}
    }

    long lk(0), rk(0);
    if((k / 2) & 1){lk = rk = k / 2;}
    else{lk = (k / 2) + 1; rk = (k / 2) - 1;}
    bool lp = f(lv, lk);
    bool rp = f(rv, rk);
    if(!lp || !rp){return false;}
    std::vector<long> b;
    for(long p = 0; p < rv.size(); p++){b.push_back(rv[p]);}
    for(long p = 0; p < lv.size(); p++){b.push_back(lv[p]);}
    a = b;
    return true;
}

int main(){

    long n, k; scanf("%ld %ld", &n, &k);
    std::vector<long> a(n); for(long p = 0; p < n; p++){a[p] = p + 1;}
    bool possible = f(a, k);
    if(possible){for(long p = 0; p < a.size(); p++){printf("%ld ", a[p]);}; puts("");}
    else{puts("-1");}

    return 0;
}
