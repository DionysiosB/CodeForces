#include <iostream>
#include <vector>

int main(){

    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::vector<std::string> f(n);
        for(long row = 0; row < n; row++){std::cin >> f[row];}

        std::vector<std::pair<long, long> > s;
        for(long row = 0; row < n; row++){
            for(long col = 0; col < n; col++){
                if(f[row][col] == '.'){continue;}
                s.push_back(std::make_pair(row, col));
            }
        }

        if(s[0].first == s[1].first){
            long rr = (1 + s[0].first) % n;
            f[rr][s[0].second] = '*';
            f[rr][s[1].second] = '*';
        }
        else if(s[0].second == s[1].second){
            long cc = (1 + s[0].second) % n;
            f[s[0].first][cc] = '*';
            f[s[1].first][cc] = '*';
        }
        else{
            f[s[0].first][s[1].second] = '*';
            f[s[1].first][s[0].second] = '*';
        }

        for(long row = 0; row < n; row++){std::cout << f[row] << std::endl;}
    }


}
