#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    long n, m; std::cin >> n >> m;
    long rr(0), cc(0);
    for(long row = 0; row < n; row++){
        std::string s; std::cin >> s;
        for(long col = 0; col < s.size(); col++){
            if(s[col] != '*'){continue;}
            rr ^= row; cc ^= col;
        }
    }

    printf("%ld %ld\n", rr + 1, cc + 1);

    return 0;
}
