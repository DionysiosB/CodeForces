#include <cstdio>
#include <iostream>
#include <vector>

int main(){

    const int64_t MOD = 1000000007;

    int64_t N, L, M; std::cin >> N >> L >> M;
    std::vector<int64_t> tf(N, 0); for(int64_t p = 0; p < N; p++){std::cin >> tf[p];}
    std::vector<int64_t> tm(N, 0); for(int64_t p = 0; p < N; p++){std::cin >> tm[p];}
    std::vector<int64_t> tl(N, 0); for(int64_t p = 0; p < N; p++){std::cin >> tl[p];}

    std::vector<std::vector<std::vector<int64_t> > > a(L + 2, std::vector<std::vector<int64_t> > (N, std::vector<int64_t>(M, 0)));
    for(int64_t p = 0; p < N; p++){a[1][p][tf[p] % M] = 1;}

    for(int64_t l = 2; l <= L; l++){
        for(int64_t p = 0; p < N; p++){
            for(int64_t q = 0; q < N; q++){
                int64_t edge = tm[q];
                for(int64_t m = 0; m < M; m++){
                    a[l][q][(m + edge) % M] += a[l - 1][p][m];
                    a[l][q][(m + edge) % M] %= MOD;
                }
            }
        }
    }

    /*
    for(int64_t l = 1; l <= L; l++){
        for(int64_t p = 0; p < N; p++){
            for(int64_t m = 0; m < M; m++){
                if(a[l][p][m] <= 0){continue;}
                std::cout << "Layer:" << l << " Node:" << p << " Mod:" << m << "->" << a[l][p][m] << std::endl;
            }
            std::cout << std::endl;
        }
    }
    */


    int64_t total(0);
    for(int64_t p = 0; p < N; p++){
        int64_t edge = tl[p];
        total += a[L][p][(M - (edge % M)) % M];
    }

    std::cout << total << std::endl;

    return 0;
}
