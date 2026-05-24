#include<iostream>
#include<vector>

int main(){

    const int N = 5005;
    const int64_t M = 998244353;

    std::vector<std::vector<int64_t> > f(N, std::vector<int64_t>(N, 0));
    for (int p = 1; p < N; p++){f[1][p] = f[p][1] = p + 1;}
    for (int p = 2; p < N; p++){
        for (int q = 2; q < N; q++){
            f[p][q] = (f[p - 1][q] + f[p - 1][q - 1] * q % M) % M;
        }
    }

    int a, b, c; scanf("%d %d %d\n", &a, &b, &c);
    int64_t total = ((f[a][b] * f[a][c] % M) * f[b][c]) % M;
    printf("%lld \n", total);

    return 0;
}
