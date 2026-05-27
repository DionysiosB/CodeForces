#include <cstdio>
#include <vector>
#include <set>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::set<std::pair<long, long> > s;
        for(long p = 1; p <= n; p++){
            long x; scanf("%ld", &x);
            s.insert(std::make_pair(x, p));
        }

        if(s.begin()->first <= 1 && s.rbegin()->first > 1){puts("-1"); continue;}

        std::vector<std::pair<long, long> > v;
        for(long p = 0; p < 30 * n; p++){
            long num  = s.rbegin()->first;
            long idxl = s.rbegin()->second;

            long den  = s.begin()->first;
            long idxs = s.begin()->second;

            if(num == den){break;}
            v.push_back(std::make_pair(idxl, idxs));
            s.erase(*s.rbegin()); s.insert(std::make_pair((num + den - 1) / den, idxl));
        }

        printf("%ld\n", v.size());
        for(long p = 0; p < v.size(); p++){printf("%ld %ld\n", v[p].first, v[p].second);}
    }

}
