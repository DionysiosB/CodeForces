#include <cstdio>
#include <vector>

int main(){

    int n, m, b; long mod; 
    scanf("%d %d %d %ld\n", &n, &m, &b, &mod);

    std::vector<int> a(n);
    for(int p = 0; p < n; p++){scanf("%d", &a[p]);}

    std::vector<std::vector<long> > count(m + 1, std::vector<long>(b + 1, 0));
    count[0][0] = 1;

    for(int p = 0; p < n; p++){
        for(int q = 1; q <= m; q++){
            for(int r = 0; r <= b; r++){
                if(r < a[p]){continue;}
                count[q][r] += count[q - 1][r - a[p]];
                count[q][r] %= mod;
            }
        }
    }

    long total(0);
    for(int p = 0; p <= b; p++){total += count[m][p]; total %= mod;}
    printf("%ld\n", total);

    return 0;
}
