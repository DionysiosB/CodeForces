#include <iostream>
#include <set>

int main(){

    std::ios_base::sync_with_stdio(false);
    long n; std::cin >> n;
    std::multiset<std::pair<long, long> > m;
    while(n--){
        std::string s; std::cin >> s;
        long close(0), cur(0);
        for(long p = 0; p < s.size(); p++){
            cur += (s[p] == '(') - (s[p] == ')');
            close += (cur < 0);
            cur = (cur > 0) ? cur : 0;
        }

        m.insert(std::make_pair(close, cur));
    }

    long cnt(0);
    while(m.size()){
        std::pair<long, long> cur = *m.begin();
        m.erase(m.find(cur));
        if(cur.first > 0 && cur.second > 0){continue;}
        std::pair<long, long> comp = std::make_pair(cur.second, cur.first);
        std::multiset<std::pair<long, long> >::iterator it = m.find(comp);
        if(it == m.end()){continue;}
        ++cnt; m.erase(it); 
    }

    std::cout << cnt << std::endl;

    return 0;
}
