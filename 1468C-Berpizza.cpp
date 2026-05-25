#include <cstdio>
#include <set>
#include <map>

int main(){

    const long N = 1e9;
    std::set<long> s;
    std::set<std::pair<long, long> > t;
    std::map<long, long> r;

    long q; scanf("%ld", &q);
    long cnt(0);
    while(q--){
        long w; scanf("%ld", &w);
        if(w == 1){
            ++cnt;
            long m; scanf("%ld", &m);
            s.insert(cnt);
            t.insert(std::make_pair(m, N - cnt));
            r[cnt] = m;
        }
        else if(w == 2){
            long num = *(s.begin());
            printf("%ld ", num);
            s.erase(num);
            t.erase(std::make_pair(r[num], N - num));
            r.erase(num);
        }
        else if(w == 3){
            std::pair<long, long> cust = *t.rbegin();
            long num = N - cust.second; long spend = cust.first;
            printf("%ld ", num);
            s.erase(num);
            t.erase(cust);
            r.erase(num);
        }
    }

    puts("");
}
