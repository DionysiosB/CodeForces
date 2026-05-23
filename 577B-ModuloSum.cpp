#include <cstdio>
#include <vector>
#include <vector>

int main(){

    long n, m; scanf("%ld %ld", &n, &m);
    bool possible = (n > m);

    std::vector<bool> mod(m, 0);
    while(n--){
        if(possible){break;}
        long x; scanf("%ld", &x);
        std::vector<bool> vec(m, 0);
        for(long p = m - 1; p >= 0; p--){
            if(p > 0 && !mod[p]){continue;}
            vec[(p + x) % m] = 1;
        }
        for(int p = 0; p < m; p++){mod[p] = mod[p] | vec[p];}

        if(mod[0]){possible = true; break;}
    }

    puts(possible ? "YES" : "NO");

    return 0;
}
