#include <iostream>
#include <vector>

int main(){

    std::ios_base::sync_with_stdio(false);
    int n, m; std::cin >> n >> m;

    std::vector<std::vector<int> > s(n, std::vector<int>(m, 0));
    for(int row = 0; row < n; row++){for(int col = 0; col < m; col++){std::cin >> s[row][col];}}

    long count(0);
    for(int row = 0; row < n; row++){
        int left(0);
        for(int col = 0; col < m; col++){if(s[row][col]){left = 1;} else{count += left;}}
        int right(0);
        for(int col = m - 1; col >= 0; col--){if(s[row][col]){right = 1;} else{count += right;}}
    }

    for(int col = 0; col < m; col++){
        int up(0);
        for(int row = 0; row < n; row++){if(s[row][col]){up = 1;} else{count += up;}}
        int down(0);
        for(int row = n - 1; row >= 0; row--){if(s[row][col]){down = 1;} else{count += down;}}
    }

    std::cout << count << std::endl;

    return 0;
}
