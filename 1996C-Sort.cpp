#include <iostream>
#include <vector>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        long n, q; std::cin >> n >> q;
        std::string a, b; std::cin >> a >> b;

        std::vector<std::vector<long> > va(n + 1, std::vector<long>(26, 0));
        for(long p = 0; p < n; p++){
            for(long u = 0; u < 26; u++){va[p + 1][u] = va[p][u];}
            ++va[p + 1][a[p] - 'a'];
        }

        std::vector<std::vector<long> > vb(n + 1, std::vector<long>(26, 0));
        for(long p = 0; p < n; p++){
            for(long u = 0; u < 26; u++){vb[p + 1][u] = vb[p][u];}
            ++vb[p + 1][b[p] - 'a'];
        }

        while(q--){
            long left, right; std::cin >> left >> right;
            long total(0);
            for(long p = 0; p < 26; p++){
                long ca = va[right][p] - va[left - 1][p];
                long cb = vb[right][p] - vb[left - 1][p];
                long diff = cb - ca;
                if(diff < 0){diff = -diff;}
                total += diff;
            }

            std::cout << (total / 2) << std::endl;
        }

    }

}
