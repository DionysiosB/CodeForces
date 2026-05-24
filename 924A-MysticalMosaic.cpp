#include <iostream>
#include <vector>

int main(){
    long n, m; std::cin >> n >> m;
    bool possible(true);
    std::vector<long> color(m, 0);

    for(long row = 1; row <= n; row++){
        std::string s; std::cin >> s;
        long cur(-1);
        for(int col = 0; col < m; col++){
            if(s[col] == '#'){
                if(!color[col]){color[col] = row;}
                if(cur == -1){cur = color[col];}
                if(cur != color[col]){possible = false;}
            }
            else if(color[col] == cur){possible = false;}
        }
    }

    puts(possible ? "Yes" : "No");

    return 0;
}
