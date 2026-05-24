#include <cstdio>
#include <vector>

int main(){

    const int D = 5;
    long n; scanf("%ld", &n);
    std::vector<std::vector<long> > a(n, std::vector<long>(D, 0));

    if(n > 11){puts("0");}
    else{
        std::vector<long> ans;
        for(long p = 0; p < n; p++){for(long q = 0; q < D; q++){scanf("%ld", &a[p][q]);}}
        for(long p = 0; p < n; p++){
            bool good(true);
            for(long q = 0; q < n; q++){
                if(q == p){continue;}
                for(int r = 0; r < n; r++){
                    if(r == p || r == q){continue;}    
                    int sum(0);
                    for(int t = 0; t < 5; t++){sum += (a[q][t] - a[p][t]) * (a[r][t] - a[p][t]);}
                    if(sum > 0){good = false;}
                }
            }

            if(good){ans.push_back(p + 1);}
        }

        printf("%ld\n", ans.size());
        for(long p = 0; p < ans.size(); p++){printf("%ld\n", ans[p]);}
    }

    return 0;
}
