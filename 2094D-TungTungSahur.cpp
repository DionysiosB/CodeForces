#include <iostream>
#include <vector>

int main(){

    std::ios_base::sync_with_stdio(false);

    long t; std::cin >> t;
    while(t--){
        std::string a, b; std::cin >> a >> b;
        a += '_'; b += '_';
        std::vector<std::pair<char, long> > va, vb;

        long cnt(1);
        for(long p = 1; p < a.size(); p++){
            if(a[p - 1] == a[p]){++cnt;}
            else{va.push_back(std::make_pair(a[p - 1], cnt)); cnt = 1;}
        }

        cnt = 1;
        for(long p = 1; p < b.size(); p++){
            if(b[p - 1] == b[p]){++cnt;}
            else{vb.push_back(std::make_pair(b[p - 1], cnt)); cnt = 1;}
        }

        bool res(true);
        if(va.size() != vb.size()){res = false;}
        for(long p = 0; res && p < va.size(); p++){
            if(va[p].first != vb[p].first){res = false;}
            if(vb[p].second < va[p].second || vb[p].second > 2 * va[p].second){res = false;}
        }

        std::cout << (res ? "YES" : "NO") << std::endl;
    }

}
