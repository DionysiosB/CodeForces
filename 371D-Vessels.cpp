#include <cstdio>
#include <vector>

int main(){

    long n; scanf("%ld", &n);
    std::vector<long> a(n + 1); for(long p = 1; p <= n; p++){scanf("%ld", &a[p]);}
    std::vector<long> b(n + 1, 0); 
    std::vector<long> next(n + 1, 0); for(long p = 0; p <= n; p++){next[p] = p;}
    long m; scanf("%ld", &m);
    while(m--){
        int t; scanf("%d", &t);
        if(t == 1){
            long u, x; scanf("%ld %ld", &u, &x);
            std::vector<long> w;
            long s = next[u];
            while(s <= n && x > 0){
                if(a[s] > b[s] + x){b[s] += x; break;}
                else{
                    x -= (a[s] - b[s]); b[s] = a[s]; 
                    w.push_back(s); ++s;
                    if(s <= n){s = next[s];} else{break;};
                }
            }
            for(long p = 0; p < w.size(); p++){next[w[p]] = s;}
        }
        else if(t == 2){
            long k; scanf("%ld", &k);
            printf("%ld\n", b[k]);
        }
    }

    return 0;
}
