#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    long n, m; scanf("%ld %ld", &n, &m);
    std::vector<std::vector<long> > a(n + 1, std::vector<long>(m + 1, 0));
    std::vector<std::vector<long> > s(n + 1, std::vector<long>(m + 1, 0));
    std::vector<long> c(3, 0);
    long cnt(0);

    for(long p = 1; p <= n; p++){
        for(long q = 1; q <= m; q++){
            scanf("%ld", &a[p][q]);
            s[p][q]=s[p][q-1]+s[p-1][q]-s[p-1][q-1]+a[p][q];
        }
    }

    scanf("%ld %ld %ld", &c[0], &c[1], &c[2]);
    sort(c.begin(),c.end());

    for(long p=1;p<n;p++){
        for(long q=p+1;q<n;q++){
            std::vector<long> u(3);
            u[0] = s[p][m]; u[1] = s[q][m]-s[p][m]; u[2] = s[n][m]-s[q][m];
            sort(u.begin(),u.end());
            if(std::equal(u.begin(),u.end(),c.begin())){cnt++;}
        }
    }

    for(long p = 1;p < m; p++){
        for(long q= p + 1; q < m; q++){
            std::vector<long> u(3);
            u[0] = s[n][p]; u[1] = s[n][q]-s[n][p]; u[2] = s[n][m]-s[n][q];
            sort(u.begin(),u.end());
            if(std::equal(u.begin(),u.end(),c.begin())){cnt++;}
        }
    }

    printf("%ld\n", cnt);

    return 0;
}
