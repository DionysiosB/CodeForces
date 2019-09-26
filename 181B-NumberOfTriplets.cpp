#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long n; scanf("%ld", &n); 
    std::vector<std::pair<long, long> > v(n);
    for(long p = 0; p < n; p++){scanf("%ld %ld", &v[p].first, &v[p].second);}
    sort(v.begin(), v.end());

    long cnt(0);
    for(long left = 0; left < n; left++){
        long idx = left + 1;
        for(long right = left + 2; right < n; right++){
            while(2 * v[idx].first < v[left].first + v[right].first){++idx;}
            while((2 * v[idx].first == v[left].first + v[right].first) && (2 * v[idx].second < v[left].second + v[right].second)){++idx;}
            if((2 * v[idx].first == v[left].first + v[right].first) && (2 * v[idx].second == v[left].second + v[right].second)){++cnt;}
        }
    }

    printf("%ld\n", cnt);

    return 0;
}
