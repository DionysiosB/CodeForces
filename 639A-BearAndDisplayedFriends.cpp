#include <cstdio>
#include <vector>
#include <set>

int main(){

    long n, k, q; scanf("%ld %ld %ld\n", &n, &k, &q);
    std::vector<long> t(n + 1);
    for(long p = 1; p <= n; p++){scanf("%ld", &t[p]);}
    std::set<long> disp;
    while(q--){
        long x, y; scanf("%ld %ld\n", &x, &y);

        if(x == 1){
            disp.insert(y);
            
            if(disp.size() > k){
                long currentMin(1000000000); long oust(-1);
                for(std::set<long>::iterator setIt = disp.begin(); setIt != disp.end(); setIt++){
                    if(t[*setIt] < currentMin){currentMin = t[*setIt]; oust = *setIt;}
                }
                disp.erase(oust);
            }
        }

        else if(x == 2){puts((disp.count(y) > 0) ? "YES" : "NO");}
    }

    return 0;
}
