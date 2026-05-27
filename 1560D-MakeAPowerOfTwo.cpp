#include <iostream>
#include <vector>
#include <algorithm>

int getDist(const std::string &target, const std::string &s){

    int a(0), b(0), cnt(0);
    while(a < target.size() || b < s.size()){
        if(a >= target.size()){++b; ++cnt;}
        else if(b >= s.size()){++a; ++cnt;}
        else if(target[a] == s[b]){++a; ++b;}
        else{++b; ++cnt;}
    }

    return cnt;
}

int main(){
    
    std::vector<std::string> vs;
    int64_t x(1);
    for(long p = 1; p < 63; p++){
        vs.push_back(std::to_string(x));
        x *= 2;
    }

    long t; std::cin >> t;
    while(t--){
        std::string s; std::cin >> s;
        long res(100);
        for(long p = 0; p < vs.size(); p++){
            int dist = getDist(vs[p], s);
            res = (res < dist) ? res : dist;
        }

        std::cout << res << std::endl;
    }

}
