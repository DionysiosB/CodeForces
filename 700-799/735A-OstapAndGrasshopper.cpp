#include <iostream>

int main(){

    int n, k; std::cin >> n >> k;
    std::string s; std::cin >> s;

    int g(-1), t(-1);
    for(int p = 0; p < s.size(); p++){
        if(s[p] == 'G'){g = p;}
        if(s[p] == 'T'){t = p;}
    }

    bool possible(0);

    for(int p = g; p < s.size(); p += k){
        if(s[p] == '#'){break;}
        if(s[p] == 'T'){possible = 1; break;}
    }

    for(int p = g; p >= 0; p -= k){
        if(s[p] == '#'){break;}
        if(s[p] == 'T'){possible = 1; break;}
    }

    std::cout << (possible ? "YES" : "NO") << std::endl;

    return 0;
}
