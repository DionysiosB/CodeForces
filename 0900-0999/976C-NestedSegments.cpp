#include <cstdio>
#include <vector>
#include <algorithm>

bool sortFunction(std::pair<std::pair<long, long>, long> a, std::pair<std::pair<long, long>, long> b){
    if(a.first.first < b.first.first){return true;}
    else if(a.first.first == b.first.first && a.first.second > b.first.second){return true;}
    return false;
}

int main(){

    long n; scanf("%ld", &n);
    std::vector<std::pair<std::pair<long, long> , long> > a(n);
    for(long p = 0; p < n; p++){
        long x, y; scanf("%ld %ld", &x, &y);
        a[p].first = std::make_pair(x, y);
        a[p].second = p + 1;
    }

    sort(a.begin(), a.end(), sortFunction);

    long u(-1), v(-1);
    long mxr = a[0].first.second;
    long idx = a[0].second;
    for(long p = 1; p < n; p++){
        if(a[p].first.second <= mxr){v = idx; u = a[p].second; break;}
        if(mxr < a[p].first.second){
            mxr = a[p].first.second;
            idx = a[p].second;
        }
    }

    printf("%ld %ld\n", u, v);

    return 0;
}
