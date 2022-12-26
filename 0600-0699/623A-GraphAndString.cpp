#include <cstdio>
#include <vector>

int main(){

    long n, m; scanf("%ld %ld", &n, &m);
    std::vector<std::vector<int> > g(n, std::vector<int>(n, 0));
    std::vector<long> deg(n, 0);
    for(long p = 0; p < m; p++){
        long x, y; scanf("%ld %ld", &x, &y);
        --x; --y; g[x][y] = g[y][x] = 1;
        ++deg[x]; ++deg[y];
    }

    std::vector<char> s(n , '-');
    bool possible(true);
    for(long p = 0; p < n; p++){if(deg[p] == n - 1){s[p] = 'b';}}

    for(long p = 0; p < n; p++){
        if(!possible){break;}
        if(s[p] == 'b'){continue;}
        else if(s[p] == '-'){s[p] = 'a';}
        for(long q = 0; q < n; q++){
            if(p == q){continue;}
            if(g[p][q]){
                if(s[q] == s[p] || s[q] == 'b'){continue;}
                else if(s[q] == '-'){s[q] = s[p];}
                else{possible = false; break;}
            }
            else{
                char expected = (s[p] == 'a') ? 'c' : 'a';
                if(s[q] == '-'){s[q] = expected;}
                else if(s[q] == expected){continue;}
                else{possible = false; break;}
            }
        }
    }

    if(possible){puts("Yes"); for(long p = 0; p < n; p++){printf("%c", s[p]);}; puts("");}
    else{puts("No");}

    return 0;
}
