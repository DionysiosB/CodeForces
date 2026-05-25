#include <iostream>
#include <vector>

int main(){

    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);


    long t; std::cin >> t;
    while(t--){
        long a, b; std::cin >> a >> b;
        std::string s; std::cin >> s;
        std::vector<long> g;

        long cnt(0), flag(false);
        for(long p = 0; p < s.size(); p++){
            if(s[p] == '1'){
                if(!flag){flag = true;}
                else if(p > 0 && s[p - 1] == '0'){g.push_back(cnt);}
                cnt = 0;
            }
            else if(s[p] == '0'){++cnt;}
        }


        long res(a * flag);
        for(long p = 0; p < g.size(); p++){
            long cur = g[p] * b;
            cur = (cur < a) ? cur : a;
            res += cur;
        }

        std::cout << res << std::endl;
    }

}
