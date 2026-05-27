#include <iostream>
#include <algorithm>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        long n, m, k; std::cin >> n >> m >> k;
        std::string a, b; std::cin >> a >> b;
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        std::string c;

        long idxa(0), idxb(0), cnta(0), cntb(0);
        while(idxa < a.size() && idxb < b.size()){
            if((cntb >= k) || (a[idxa] < b[idxb] && cnta < k)){c += a[idxa]; ++idxa; ++cnta; cntb = 0;}
            else if((cnta >= k) || (b[idxb] < a[idxa] && cntb < k)){c += b[idxb]; ++idxb; ++cntb; cnta = 0;}
        }

        std::cout << c << std::endl;
    }

}
