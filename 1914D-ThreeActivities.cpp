#include <cstdio>
#include <vector>
#include <set>
#include <algorithm>

int main(){

    const int D = 3;
    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<std::vector<std::pair<long, long> > > w(D, std::vector<std::pair<long, long> >(D));

        for(long d = 0; d < D; d++){
            std::vector<std::pair<long, long> > v(n);
            for(long p = 0; p < n; p++){
                scanf("%ld", &v[p].first); v[p].second = p;
            }
            sort(v.rbegin(), v.rend());

            for(int p = 0; p < D; p++){w[d][p] = v[p];}
        }


        std::vector<int> m(3); m[0] = 0; m[1] = 1; m[2] = 2;
        long mx(0);
        do{
            std::set<long> taken;
            long total(0);
            for(long q = 0; q < D; q++){
                long idx = m[q];
                for(long r = 0; r < D; r++){
                    if(taken.count(w[idx][r].second)){continue;}
                    taken.insert(w[idx][r].second);
                    total += w[idx][r].first;
                    break;
                }
            }
            
            mx = (mx > total) ? mx : total;
        }while(next_permutation(m.begin(), m.end()));

        printf("%ld\n", mx);
    }

}

