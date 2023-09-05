#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

int main(){

    std::ios_base::sync_with_stdio(false);
    long n, m; std::cin >> n >> m;
    std::multiset<std::string> sms;
    std::vector<std::string> f, g;
    for(long p = 0; p < n; p++){
        std::string x; std::cin >> x;
        std::string y(x); reverse(y.begin(), y.end());
        std::multiset<std::string>::iterator it = sms.find(y);
        if(it != sms.end()){
            sms.erase(it);
            f.push_back(x); g.push_back(y);
        }
        else{sms.insert(x);}
    }

    std::string middle("");
    for(std::multiset<std::string>::iterator it = sms.begin(); it != sms.end(); it++){
        std::string x = *it; std::string y(x); reverse(y.begin(), y.end());
        if(x == y){middle = x; break;}
    }

    long len = (f.size() + g.size()) * m + middle.size();
    std::cout << len << std::endl;
    for(long p = 0; p < f.size(); p++){std::cout << f[p];}
    std::cout << middle;
    for(long p = g.size() - 1; p >= 0; p--){std::cout << g[p];}
    std::cout << std::endl;
}
