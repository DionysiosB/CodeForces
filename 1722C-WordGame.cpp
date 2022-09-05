#include <iostream>
#include <vector>
#include <set>

int main(){

    const int N = 3;
    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::vector<std::set<std::string> > v(N);
        for(long p = 0; p < N; p++){
            for(long q = 0; q < n; q++){
                std::string s; std::cin >> s;
                v[p].insert(s);
            }
        }


        std::vector<long> score(N, 0);
        for(long p = 0; p < N; p++){
            for(std::set<std::string>::iterator it = v[p].begin(); it != v[p].end(); it++){
                std::string x = *it;
                long cnt(0);
                for(long q = 0; q < N; q++){
                    if(q == p){continue;}
                    cnt += v[q].count(x);
                }

                if(cnt == 0){score[p] += 3;}
                else if(cnt == 1){score[p] += 1;}
            }
        }

        for(long p = 0; p < N; p++){std::cout << score[p] << " ";}
        std::cout << std::endl;
    }

}
