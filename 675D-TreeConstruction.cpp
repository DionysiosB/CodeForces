#include <cstdio>
#include <iostream>
#include <map>
#include <set>
#include <algorithm>

int main(){

    long n; scanf("%ld", &n);
    std::set<long> s;
    std::map<long, std::pair<long, long> > m;

    long a; scanf("%ld", &a); s.insert(a); m[a] = std::make_pair(-1, -1);

    for(long p = 1; p < n; p++){
        scanf("%ld", &a);
        std::set<long>::iterator it = s.upper_bound(a);
        if(it == s.end() || m[*it].first >= 0){--it; m[*it].second = a;}
        else{m[*it].first = a;}
        s.insert(a); m[a] = std::make_pair(-1, -1);
        printf("%ld ", *it);
    }

    puts("");

    return 0;
}
