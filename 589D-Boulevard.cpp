#include <cstdio>
#include <vector>

int main(){

    long n; scanf("%ld", &n);
    std::vector<long> t(n), s(n), f(n), d(n);
    for(long p = 0; p < n; p++){
        scanf("%ld %ld %ld", &t[p], &s[p], &f[p]);
        d[p] = (f[p] > s[p]) ? 1 : -1;
    }

    std::vector<long> cnt(n);
    for(long a = 0; a < n; a++){
        for(long b = a + 1; b < n; b++){
            bool meet(false);

            if((d[a] == d[b]) && (s[a] - d[a] * t[a] == s[b] - d[b] * t[b])){
                if((d[b] * (s[a] - s[b]) >= 0) && (d[b] * (s[a] - s[b]) <= d[b] * (f[b] - s[b]))){meet = true;}
                else if((d[a] * (s[b] - s[a]) >= 0) && (d[a] * (s[b] - s[a]) <= d[a] * (f[a] - s[a]))){meet = true;}
            }
            else{
                double tm = ((d[b] * t[b] - d[a] * t[a]) - (s[b] - s[a])) / (1.0 * d[b] - d[a]);
                if((tm >= t[a]) && (tm >= t[b]) && (tm <= t[a] + (f[a] - s[a]) / d[a]) && (tm <= t[b] + (f[b] - s[b]) / d[b])){meet = true;}
            }

            if(meet){++cnt[a]; ++cnt[b];}
        }
    }

    for(long p = 0; p < n; p++){printf("%ld ", cnt[p]);}
    puts("");

    return 0;
}
