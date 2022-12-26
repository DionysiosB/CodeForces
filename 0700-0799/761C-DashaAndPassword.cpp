#include <iostream>
#include <vector>

int main(){

    const int D = 3;
    const int N = 200;

    std::ios_base::sync_with_stdio(false);
    int n, m; std::cin >> n >> m;
    std::vector<std::string> a(n);
    for(int p = 0; p < n; p++){std::cin >> a[p];}

    std::vector<std::vector<int> > v(n, std::vector<int>(D, N));

    for(int p = 0; p < n; p++){
        for(int u = 0; u < m; u++){
            int x = (u < m - u) ? u : (m - u);
            if('a' <= a[p][u] && a[p][u] <= 'z'){v[p][0] = (v[p][0] < x) ? v[p][0] : x;}
            else if('0' <= a[p][u] && a[p][u] <= '9'){v[p][1] = (v[p][1] < x) ? v[p][1] : x;}
            else if(a[p][u] == '#' || a[p][u] == '*' || a[p][u] == '&'){v[p][2] = (v[p][2] < x) ? v[p][2] : x;}
        }
    }

    for(int p = 0; p < n; p++){
        std::cout << a[p] << "\t";
        for(int u = 0; u < D; u++){std::cout << v[p][u] << "\t";}
        std::cout <<std::endl;
    }

    int ans(3 * N);
    for(int p = 0; p < n; p++){
        for(int q = 0; q < n; q++){
            if(q == p){continue;}
            for(int r = 0; r < n; r++){
                if(r == p || r == q){continue;}
                int cand = v[p][0] + v[q][1] + v[r][2];
                ans = (ans < cand) ? ans: cand;
            }
        }
    }

    std::cout << ans << std::endl;

    return 0;
}
