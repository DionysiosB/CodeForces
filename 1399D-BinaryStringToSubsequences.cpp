#include <iostream>
#include <vector>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string s; std::cin >> s;

        long num(0);
        std::vector<long> z, a;
        std::vector<long> v(s.size());

        for(long p = 0; p < s.size(); p++){
            long cur;
            if(s[p] == '0'){
                if(a.empty()){cur = ++num;}
                else{cur = a.back(); a.pop_back();}
                z.push_back(cur);
            }
            else if(s[p] == '1'){
                if(z.empty()){cur = ++num;}
                else{cur = z.back(); z.pop_back();}
                a.push_back(cur);
            }
            v[p] = cur;
        }

        std::cout << num << std::endl;
        for(long p = 0; p < n; p++){std::cout << v[p] << " ";}
        std::cout << std::endl;
    }

    return 0;
}
