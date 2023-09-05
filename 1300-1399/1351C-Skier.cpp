#include <iostream>
#include <set>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        std::string s; std::cin >> s;
        std::set<std::pair<std::pair<long, long>, std::pair<long, long> > > vis;
        std::pair<long, long> cur(std::make_pair(0,0));
        long cnt(0);
        for(long p = 0; p < s.size(); p++){
            std::pair<long, long> next = cur;
            if(s[p] == 'S'){--next.second;}
            else if(s[p] == 'N'){++next.second;}
            else if(s[p] == 'W'){--next.first;}
            else if(s[p] == 'E'){++next.first;}
            cnt += 5 - 4 * vis.count(std::make_pair(cur, next));
            vis.insert(std::make_pair(cur, next));
            vis.insert(std::make_pair(next, cur));
            cur = next;
        }

        printf("%ld\n", cnt);
    }

    return 0;
}
