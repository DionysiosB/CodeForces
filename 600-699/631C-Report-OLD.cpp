#include <cstdio>
#include <vector>
#include <algorithm>
#include <functional>

int main(){

    long n, m; scanf("%ld %ld", &n, &m);
    std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}

    std::vector<std::pair<int, long> > v;
    for(long p = 0; p < m; p++){
        int t; long r; scanf("%d %ld", &t, &r); 
        while(!v.empty() && v.back().second <= r){v.pop_back();}
        if(!v.empty() && v.back().first == t){continue;}
        v.push_back(std::make_pair(t, r));
    }

    for(long p = 0; p < v.size(); p++){
        int t = v[p].first;
        long r = v[p].second;
        if(t == 1){sort(a.begin(), a.begin() + r);}
        else{sort(a.begin(), a.begin() + r, std::greater<long>());}
    }

    for(long p = 0; p < n; p++){printf("%ld ", a[p]);}
    puts("");

    return 0;
}
