#include <iostream>
#include <vector>

int main(){

    long n, m; std::cin >> n >> m;
    std::vector<std::string> b(n);
    for(long p = 0; p < n; p++){std::cin >> b[p];}
    
    bool valid(true);
    for(long row = 0; row < n; row++){
        if(!valid){break;}
        for(long col = 0; col < b[row].size(); col++){
            if(!valid){break;}
            if(b[row][col] == '*'){continue;}
            long cnt;
            if(b[row][col] == '.'){cnt = 0;}
            else{cnt = b[row][col] - '0';}

            long bombs(0);
            for(long dr = -1; dr <= 1; dr++){
                for(long dc = -1; dc <= 1; dc++){
                    if(dr == 0 && dc == 0){continue;}
                    if(row + dr < 0 || row + dr >= n){continue;}
                    if(col + dc < 0 || col + dc >= m){continue;}
                    if(b[row + dr][col + dc] == '*'){++bombs;}
                }
            }

           if(cnt != bombs){valid = false; break;} 
        }
    }

    std::cout << (valid ? "YES" : "NO") << std::endl;

    return 0;
}
