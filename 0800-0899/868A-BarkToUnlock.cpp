#include <iostream>
#include <string>
#include <vector>

int main(){

    std::string pw; std::cin >> pw;
    int n; std::cin >> n;
    std::vector<std::string> v(n);
    for(long p = 0; p < n; p++){std::cin >> v[p];}

    bool found(false);
    for(long a = 0; a < n; a++){
        if(found){break;}
        for(long b = 0; b < n; b++){
            std::string s = v[a] + v[b];
            if(s.find(pw) != std::string::npos){found = true; break;}
        }
    }

    std::cout << (found ? "YES" : "NO") << std::endl;

    return 0;
}
