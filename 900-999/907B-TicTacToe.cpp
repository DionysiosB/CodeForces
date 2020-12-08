#include <iostream>
#include <vector>

int main(){

    const int N = 3;
    std::vector<std::string> v(N * N);
    for(int row = 0; row < N * N; row++){
        for(int col = 0; col < N; col++){std::string x; std::cin >> x; v[row] += x;}
    }

    int lr, lc; std::cin >> lr >> lc;
    --lr; --lc;

    int wr(lr % N), wc(lc % N);

    bool found(false);
    for(int rr = 0; rr < N; rr++){
        for(int cc = 0; cc < N; cc++){
            if(v[N * wr + rr][N * wc + cc] == '.'){v[N * wr + rr][N * wc + cc] = '!'; found = true;}
        }
    }

    if(!found){for(int row = 0; row < v.size(); row++){for(int p = 0; p < v[row].size(); p++){if(v[row][p] == '.'){v[row][p] = '!';}}}}
    
    for(int row = 0; row < v.size(); row++){
        for(int p = 0; p < v[row].size(); p++){
            std::cout << v[row][p];
            if(p % N == 2 && (p + 1 < v.size())){std::cout << " ";}
        }
        std::cout << std::endl;
        if(row % 3 == 2){std::cout << std::endl;}
    }

    return 0;
}
