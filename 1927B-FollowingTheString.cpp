#include <iostream>
#include <vector>
#include <map>

int main(){

    std::ios_base::sync_with_stdio(false);

    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::map<long, std::vector<long> > mv;
        std::vector<char> res(n, ' ');
        char nxt('a');
        for(long p = 0; p < n; p++){
            int x; std::cin >> x;
            char cur;
            if(x == 0){cur = nxt; ++nxt;}
            else{cur = mv[x - 1].back(); mv[x - 1].pop_back();}
            std::cout << cur; mv[x].push_back(cur);
        }

        std::cout << std::endl;

    }

}
