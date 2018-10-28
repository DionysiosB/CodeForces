#include <cstdio>
#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <algorithm>

int main(){

    long n; scanf("%ld", &n);
    std::map<long, long> m;
    for(long p = 0; p < n; p++){
        long r; scanf("%ld", &r);
        if(m.count(r) > 0){++m[r];}
        else{m[r] = 1;}
    }

    std::set<std::pair<long, long> > qs;
    for(std::map<long, long>::iterator it = m.begin(); it != m.end(); it++){qs.insert(std::make_pair(it->second, it->first));}
    std::vector<std::vector<long> > v;

    while(qs.size() >= 3){
        std::set<std::pair<long, long> >::iterator it = qs.end();
        it = --(qs.end()); std::pair<long, long> p1 = *it; qs.erase(it);
        it = --(qs.end()); std::pair<long, long> p2 = *it; qs.erase(it);
        it = --(qs.end()); std::pair<long, long> p3 = *it; qs.erase(it);

        --(p1.first);  if(p1.first > 0){qs.insert(p1);}
        --(p2.first);  if(p2.first > 0){qs.insert(p2);}
        --(p3.first);  if(p3.first > 0){qs.insert(p3);}

        std::vector<long> s(3); s[0] = p1.second; s[1] = p2.second; s[2] = p3.second;
        sort(s.rbegin(), s.rend()); v.push_back(s);
    }

    printf("%ld\n", v.size());
    for(long p = 0; p < v.size(); p++){printf("%ld %ld %ld\n", v[p][0], v[p][1], v[p][2]);}

    return 0;
}
