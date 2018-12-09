#include <cstdio>
#include <vector>

bool check(long h, const std::vector<long> &a, long m, long w){

    const long n = a.size();
    std::vector<long> v(n + w + 1, 0);
    long cnt(0), total(0);
    for(long p = 0; p < n; p++){
        cnt += v[p];
        long diff = h - (a[p] + cnt);
        if(diff < 0){continue;}
        cnt += diff;
        total += diff; if(total > m){return false;}
        v[p + w] = -diff;
    }

    return true;
}


int main(){

    long n, m, w; scanf("%ld %ld %ld", &n, &m, &w);
    std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
    long left(0), right(1e9 + 1e7), height(0);
    while(left <= right){
        long mid = (left + right) / 2;
        if(check(mid, a, m, w)){height = mid; left = mid + 1;}
        else{right = mid - 1;}
    }

    printf("%ld\n", height);

    return 0;
}
