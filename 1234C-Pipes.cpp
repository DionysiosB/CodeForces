#include <iostream>

int main(){

    long q; std::cin >> q;
    while(q--){
        long n; std::cin >> n; 
        std::string s[2]; std::cin >> s[0] >> s[1];

        bool possible(true);
        int row(0), col(0), prev(0), next(0);
        while(col < n){
            if(prev == row && (s[row][col] == '1' || s[row][col] == '2')){next = row; ++col;}
            else if(prev == row){next = 1 - row;}
            else if(prev != row && (s[row][col] == '1' || s[row][col] == '2')){possible = false; break;}
            else if(prev != row){++col; next = row;}
            prev = row; row = next;
        }

        possible = possible && (next == 1);
        std::cout << (possible ? "YES" : "NO") << std::endl;
    }

    return 0;
}
