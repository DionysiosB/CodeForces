#include <iostream>
#include <map>
#include <algorithm>

int main(){

    int64_t q; std::cin >> q;
    std::map<std::pair<int64_t, int64_t>, int64_t> cost;
    while(q--){
        int64_t t, a, b; std::cin >> t >> a >> b;
        if(t == 1){
            int64_t inc; std::cin >> inc;
            while(a != b){
                if(a > b){std::swap(a, b);}
                if(cost.count(std::make_pair(b/2, b)) <= 0){cost[std::make_pair(b/2, b)] = 0;}
                cost[std::make_pair(b/2, b)] += inc;
                b /= 2;
            }
        }
        else if(t == 2){
            int64_t fee(0);
            while(a != b){
                if(a > b){std::swap(a, b);}
                if(cost.count(std::make_pair(b/2, b)) > 0){fee += cost[std::make_pair(b/2, b)];}
                b /= 2;
            }
            std::cout << fee << std::endl;
        }
    }

    return 0;
}
