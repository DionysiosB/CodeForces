#include <cstdio>
#include <vector>

const long M = 1000000007;
const long MAXN = 1001;

std::vector<std::vector<long long> > getCombinations(){

    std::vector<std::vector<long long> > comb(MAXN + 1, std::vector<long long>(MAXN + 1, 0));

    for(int pk = 0; pk <= MAXN; pk++){comb[0][pk] = 0;}
    for(int pn = 0; pn <= MAXN; pn++){comb[pn][0] = 1;}

    for(int pn = 1; pn <= MAXN; pn++){
        for(int pk = 1; pk <= MAXN; pk++){
            comb[pn][pk] = (comb[pn - 1][pk] + comb[pn - 1][pk - 1]) % M;
        }
    }

    return comb;
}


int main(){

    long long k; scanf("%lld\n", &k);
    std::vector<long long> colors(k);
    long long N(0); 
    for(int pk = 0; pk < k; pk++){scanf("%lld\n", &colors[pk]); N += colors[pk];}
    std::vector<std::vector<long long> > choose = getCombinations();

    long long output(1); long long total(0);
    for(int pk = 0; pk < k; pk++){
        long long current = colors[pk];
        total += current;
        output = (output * choose[total - 1][current - 1]) % M;
    }

    printf("%lld\n", output);

    return 0;
}
