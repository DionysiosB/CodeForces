#include <cstdio>
#include <vector>
#include <set>

int main(){

    const long N = 2e5 + 7;
    long n, k; scanf("%ld %ld", &n, &k);
    std::vector<long> a(N);
    std::vector<std::vector<std::pair<long, long> > > s(N);
    std::vector<std::vector<long> > t(N);

    for(long p = 0; p < n; p++){
        long left, right; scanf("%ld %ld", &left, &right);
        ++a[left]; --a[right + 1];
        s[left].push_back(std::make_pair(right + 1, p + 1));
        t[right + 1].push_back(p + 1);
    }

    std::vector<long> rem;
    std::set<std::pair<long, long> > cur;
    for(long p = 0; p < N; p++){
        for(long u = 0; u < t[p].size(); u++){cur.erase(std::make_pair(p, t[p][u]));}
        for(long u = 0; u < s[p].size(); u++){cur.insert(s[p][u]);}
        while(cur.size() > k){
            std::set<std::pair<long, long> >::reverse_iterator it = cur.rbegin();
            long x = it->first;
            long y = it->second;
            ++a[x]; rem.push_back(y);
            cur.erase(*it);
        }
    }

    printf("%ld\n", rem.size());
    for(long p = 0; p < rem.size(); p++){printf("%ld ", rem[p]);}
    puts("");

    return 0;
}
