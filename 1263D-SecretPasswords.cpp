#include <iostream>
#include <vector>

int main(){

    const long N = 26;
    long n; std::cin >> n;
    std::vector<long> v(N, 0); for(long p = 0; p < N; p++){v[p] = p;}
    std::vector<bool> w(N, 0);

    for(long p = 0; p < n; p++){
        std::string x; std::cin >> x;
        std::vector<bool> f(N, 0);
        for(long p = 0; p < x.size(); p++){w[x[p] - 'a'] = f[x[p] - 'a'] = 1;}
        long head; for(long p = 0; p < N; p++){if(f[p]){head = v[p]; break;}}
        for(long p = 0; p < N; p++){if(f[p]){v[v[p]] = head; v[p] = head;}}
        //for(long p = 0; p < N; p++){printf("%c -> %c\n", (char)('a' + p) , (char)('a' + v[p]));}; puts("===\n\n");
    }

    long cnt(0); for(long p = 0; p < N; p++){cnt += w[p] * (v[p] == p);}
    printf("%ld\n", cnt);

    return 0;
}
