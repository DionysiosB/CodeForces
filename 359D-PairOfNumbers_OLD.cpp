#include <cstdio>
#include <vector>

int main(){

    long n; scanf("%ld", &n);
    std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}


    std::vector<long> b, lm, rm;
    for(long p = 0; p < n; p++){
        if(p > 0 && a[p] == a[p - 1]){++rm.back();}
        else{b.push_back(a[p]); lm.push_back(p); rm.push_back(p);}
    }

    long maxDiff(-1); std::vector<long> v;
    for(long p = 0; p < b.size(); p++){
        long left(p), right(p);
        while(left > 0 && b[p] <= b[left - 1] && b[left - 1] % b[p] == 0){--left;}
        while(right + 1 < b.size() && b[p] <= b[right + 1] && b[right + 1] % b[p] == 0){++right;}
        long diff = rm[right] - lm[left];
        if(diff > maxDiff){maxDiff = diff; v = std::vector<long>(1, lm[left]);}
        else if(diff == maxDiff && v.back() < lm[left]){v.push_back(lm[left]);}
    }

    printf("%ld %ld\n", v.size(), maxDiff);
    for(long p = 0; p < v.size(); p++){printf("%ld ", 1 + v[p]);}
    puts("");

    //Too slow when eg a = [1 2 1 2 1 2 1 2 ...]

    return 0;
}
