#include <iostream>
#include <vector>
#include <algorithm>

int main(){

    std::ios_base::sync_with_stdio(false);
    int64_t a, b, c; std::cin >> a >> b >> c;
    int64_t m; std::cin >> m;
    std::vector<std::pair<int64_t, std::string> > mv(m);
    for(int64_t p = 0; p < m; p++){
        int64_t price; std::string port; std::cin >> price >> port;
        mv[p] = std::make_pair(price, port);
    }

    sort(mv.begin(), mv.end());

    int64_t equipped(0), total(0);
    for(int64_t p = 0; p < mv.size(); p++){
        if(mv[p].second == "USB"){
            if(a > 0 || c > 0){
                ++equipped; total += mv[p].first;
                if(a > 0){--a;} else if(c > 0){--c;}
            }
        }

        else{
            if(b > 0 || c > 0){
                ++equipped; total += mv[p].first;
                if(b > 0){--b;} else if(c > 0){--c;}
            }
        }
    }

    std::cout << equipped <<  " " << total << std::endl;

    return 0;
}
