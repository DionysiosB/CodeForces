#include <iostream>
#include <vector>

int main(){

    std::string s; getline(std::cin, s);
    std::vector<int> pos1, pos2;

    for(int p = 0; p < s.size() - 1; p++){
        if(s[p] == 'A' && s[1 + p] == 'B'){pos1.push_back(p);}
        else if(s[p] == 'B' && s[1 + p] == 'A'){pos2.push_back(p);}
    }

    std::string ans = "NO";
    if(pos1.size() > 0 && pos2.size() > 0 && (pos1[0] + 1 < pos2.back() || pos2[0] + 1 < pos1.back())){ans = "YES";}
    std::cout << ans << std::endl;

    return 0;
}
