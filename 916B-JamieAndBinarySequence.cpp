#include <cstdio>
#include <vector>
#include <map>
#include <set>
typedef long long ll;

int main(){

    ll n, k; scanf("%lld %lld", &n, &k);
    std::set<int> s; ll x(n), cnt(0); 
    while(x > 0){if(x % 2){s.insert(cnt);}; x /= 2; ++cnt;}

    if(s.size() > k){puts("No");}
    else{
        std::map<long, long> m;
        long rem(k), cur(cnt);
        for(std::set<int>::iterator it = s.begin(); it != s.end(); it++){m[*it] = 1; --rem; cur = (cur > (*it)) ? cur : (*it);}
        while(rem > 0){
            if(rem >= m[cur]){long u = m[cur]; m.erase(cur); --cur; m[cur] += 2 * u; rem -= u;}
            else{m[cur] -= rem; m[cur - 1] += 2 * rem; rem = 0; break;}
        }

        puts("Yes");
        std::vector<int> v; 
        for(std::map<long, long>::iterator it = m.begin(); it != m.end(); it++){
            long key = it->first; long rep = it->second;
            while(rep--){v.push_back(key);}
        }
        for(long p = v.size() - 1; p >= 0; p--){printf("%d ", v[p]);}; puts("");
    }

    return 0;
}
