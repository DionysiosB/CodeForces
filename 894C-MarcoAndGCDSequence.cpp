#include <cstdio>
#include <vector>

long gcd(long a, long b){return (b == 0) ? a : gcd(b, a % b);}

int main(){

    long m; scanf("%ld", &m);
    std::vector<long> s(m);
    long g(0);
    for(long p = 0; p < m; p++){
        scanf("%ld", &s[p]);
        g = gcd(g, s[p]);
    }

    if(g < s[0]){puts("-1");}
    else{
        printf("%ld\n", 2 * m);
        for(long p = 0; p < 2 * m; p++){
            if(p & 1){printf("%ld ", g);}
            else{printf("%ld ", s[p / 2]);}
        }
        puts("");
    }

    return 0;
}
