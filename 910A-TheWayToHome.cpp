#include <iostream>
#include <vector>

int main(){

    long n, d; std::cin >> n >> d;
    std::string s; std::cin >> s;
    std::vector<long> v;
    for(long p = 0; p < s.size(); p++){if(s[p] == '1'){v.push_back(p);}}
    std::vector<long> w(v.size(), n + 1); w[0] = 0;
    for(long from = 0; from < v.size(); from++){
        for(long to = from + 1; to < v.size(); to++){
            if(v[to] - v[from] <= d){w[to] = (w[to] <= w[from] + 1) ? w[to] : (w[from] + 1);}
            else{break;}
        }
    }

    std::cout << ((w.back() <= n) ? w.back() : -1) << std::endl;

    return 0;
}
