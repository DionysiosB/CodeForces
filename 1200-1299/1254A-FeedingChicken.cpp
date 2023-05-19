#include <iostream>
#include <vector>


char getChar(int x){
    if(x < 10){return ('0' + x);}
    else if(x < 36){return ('a' + x - 10);}
    else if(x < 62){return ('A' + x - 36);}
    else return '#';
}

int main(){

    int t; std::cin >> t;
    while(t--){
        int r, c, k; std::cin >> r >> c >> k;
        std::vector<std::string> d(r); for(int row = 0; row < r; row++){std::cin >> d[row];}
        std::vector<std::string> f(r);
        long total(0);
        for(int row = 0; row < r; row++){for(int col = 0; col < c; col++){total += (d[row][col] == 'R');}}
        int a(total / k), b(total % k);
        int cur(0);
        int g = a + (cur < b);
        for(int row = 0; row < r; row++){
            int start(0), stop(c), step(1);
            if(row % 2){start = c - 1; stop = -1; step = -1;}
            for(int col = start; col != stop; col += step){
                bool rice = (d[row][col] == 'R');
                d[row][col] = getChar(cur);
                if(rice){--g; if(g <= 0){++cur; if(cur >= k){cur = k - 1;}; g = a + (cur < b);}}
            }
        }

        for(int row = 0; row < r; row++){std::cout << d[row] << std::endl;}
    }

    return 0;
}
