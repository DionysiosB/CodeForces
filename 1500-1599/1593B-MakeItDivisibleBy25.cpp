#include <iostream>
#include <vector>

int main(){

    std::ios_base::sync_with_stdio(false);
    std::vector<std::string> v; 
    v.push_back("00"); v.push_back("25"); v.push_back("50"); v.push_back("75");

    long t; std::cin >> t;
    while(t--){
        std::string n; std::cin >> n;
        long res(n.size() + 1);
        for(long p = 0; p < v.size(); p++){
            bool first(false), second(false); long cnt(0);
            for(long i = n.size() - 1; i >= 0; i--){
                if(!first && n[i] == v[p][1]){first = true;}
                else if(first && n[i] == v[p][0]){second = true; break;}
                else{++cnt;}
                //std::cout << v[p] << " n[i]:" << n[i] << "  first:" << first << " second:" << second << " cnt:" << cnt << std::endl;
            }

            if(!second){cnt = n.size();}
            //std::cout << v[p] << " " << cnt << std::endl;
            res = (res < cnt) ? res : cnt;
        }

        std::cout << res << std::endl;
    }

}
