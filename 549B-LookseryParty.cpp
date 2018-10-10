#include <iostream>
#include <vector>

int main(){

    std::ios_base::sync_with_stdio(false);
    int n; std::cin >> n; 
    std::vector<std::vector<bool> > g(n, std::vector<bool>(n, 0));
    for(int row = 0; row < n; row++){
        std::string s; std::cin >> s;
        for(int col = 0; col < s.size(); col++){g[row][col] = s[col] - '0';}
    }

    std::vector<int> a(n);
    for(int p = 0; p < n; p++){std::cin >> a[p];}

    bool done(false);
    std::vector<int> guests;
    while(!done){
        done = true;
        for(int p = 0; p < n; p++){
            if(a[p] != 0){continue;}
            done = false;
            guests.push_back(p);
            for(int q = 0; q < n; q++){a[q] -= g[p][q];}
            break;
        }
    }

    std::cout << guests.size() << std::endl;
    for(int p = 0; p < guests.size(); p++){std::cout << (1 + guests[p]) << std::endl;}

    return 0;
}
