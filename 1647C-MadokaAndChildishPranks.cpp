#include <iostream>
#include <vector>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        long n, m; std::cin >> n >> m;
        std::vector<std::string> v(n);
        for(long row = 0; row < n; row++){std::cin >> v[row];}


        if(v[0][0] == '1'){std::cout << "-1" << std::endl; continue;}

        std::vector<std::vector<long> > w;
        for(long col = m - 1; col >= 0; col--){
            for(long row = n - 1; row >= 0; row--){
                if(v[row][col] == '0'){continue;}
                std::vector<long> b(4);
                if(row){b[0] = row;     b[1] = col + 1; b[2] = row + 1; b[3] = col + 1;}
                else{   b[0] = row + 1; b[1] = col;     b[2] = row + 1; b[3] = col + 1;}
                w.push_back(b);
            }
        }

        std::cout << w.size() << std::endl;
        for(long p = 0; p < w.size(); p++){
            std::cout << w[p][0] << " " << w[p][1] << " " << w[p][2] << " " << w[p][3] << " " << std::endl;
        }

    }

}
