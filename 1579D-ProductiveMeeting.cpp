#include <cstdio>
#include <vector>
#include <algorithm>
#include <set>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::set<std::pair<long, long> > s;
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            if(x > 0){s.insert(std::make_pair(x, p + 1));}
        }

        std::vector<std::pair<long, long> > res;
        while(s.size() > 1){
            std::pair<long, long> a = *s.rbegin();
            s.erase(a);
            std::pair<long, long> b = *s.rbegin();
            s.erase(b);
            res.push_back(std::make_pair(a.second, b.second));
            --a.first; --b.first;
            if(a.first > 0){s.insert(a);}
            if(b.first > 0){s.insert(b);}
        }

        printf("%ld\n", res.size());
        for(long p = 0; p < res.size(); p++){printf("%ld %ld\n", res[p].first, res[p].second);}
    }
}
