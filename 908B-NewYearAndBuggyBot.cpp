#include <iostream>
#include <vector>
#include <algorithm>

int main(){

    std::ios_base::sync_with_stdio(false);
    long n, m; std::cin >> n >> m;
    std::vector<std::string> mz(n);
    for(long p = 0; p < n; p++){std::cin >> mz[p];}

    std::string instr; std::cin >> instr;

    long sr(-1), sc(-1), exitRow(0), exitCol(0);
    for(long p = 0; p < n; p++){
        for(long q = 0; q < m; q++){
            if(mz[p][q] == 'S'){sr = p; sc = q;}
            else if(mz[p][q] == 'E'){exitRow = p; exitCol = q;}
        }
    }


    std::vector<long> perm(4); for(int p = 0; p < 4; p++){perm[p] = p;}

    long cnt(0);
    do{
        
        long row(sr), col(sc);
        bool success(false);
        for(int p = 0; p < instr.size(); p++){
            int u = instr[p] - '0';
            if(u == perm[0]){++row;}
            else if(u == perm[1]){--row;}
            else if(u == perm[2]){++col;}
            else if(u == perm[3]){--col;}

            if(row < 0 || row >= n || col < 0 || col >= m){break;}
            if(mz[row][col] == '#'){break;}
            if(mz[row][col] == 'E'){success = true; break;}
        }

        cnt += success;
    }while(next_permutation(perm.begin(), perm.end()));

    std::cout << cnt << std::endl;

    return 0;
}
