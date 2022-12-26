#include <iostream>
#include <vector>

int main(){

    int n; std::cin >> n;
    std::vector<int64_t> pos;
    for(int p = 0; p < n; p++){
        int x; std::cin >> x;
        if(x == 1){pos.push_back(p);}
    }

    int64_t total = (pos.size() == 0) ? 0 : 1;
    for(int p = 1; p < pos.size(); p++){total *= (pos[p] - pos[p - 1]);}
    std::cout << total << std::endl;

    return 0;
}
