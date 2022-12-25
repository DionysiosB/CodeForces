#include <cstdio>
#include <vector>

int main(){

    long n; scanf("%ld", &n);
    std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}

    long maxDiff(-1); std::vector<long> v;
    for(long p = 0; p < n; p++){
        long left(p), right(p);
        while(left > 0 && a[p] <= a[left - 1] && a[left - 1] % a[p] == 0){--left;}
        while(right + 1 < n && a[p] <= a[right + 1] && a[right + 1] % a[p] == 0){++right;}
        long diff = right - left;
        if(diff > maxDiff){maxDiff = diff; v = std::vector<long>(1, left + 1);}
        else if(diff == maxDiff){v.push_back(left + 1);}
    }

    printf("%ld %ld\n", v.size(), maxDiff);
    for(long p = 0; p < v.size(); p++){printf("%ld ", v[p]);}
    puts("");

    return 0;
}
