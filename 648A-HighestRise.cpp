#include <iostream>
#include <vector>

int main(){

    std::ios_base::sync_with_stdio(false);
    long n, m; std::cin >> n >> m;
    std::vector<long> h(m, 0);

    for(long row = 1; row <= n; row++){
        std::string s; std::cin >> s;
        for(long p = 0; p < m; p++){
            if(!h[p] && s[p] == '*'){h[p] = n - row;}
        }
    }

    long up(0), down(0);
    for(long p = 1; p < m; p++){
        if(h[p - 1] < h[p]){
            long diff = h[p] - h[p - 1];
            up = (up > diff ? up : diff);
        }
        else if(h[p - 1] > h[p]){
            long diff = h[p - 1] - h[p];
            down = (down > diff ? down : diff);
        }
    }

    std::cout << up << " " << down << std::endl;
}
