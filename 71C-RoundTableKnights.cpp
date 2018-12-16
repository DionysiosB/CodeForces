#include <cstdio>
#include <vector>

int main(){

    long n; scanf("%ld", &n);
    std::vector<int> a(n); for(long p = 0; p < n; p++){scanf("%d", &a[p]);}
    std::vector<long> div;

    for(long p = 1; p * p <= n; p++){if(n % p == 0){div.push_back(p); div.push_back(n / p);}}

    bool possible(false);
    for(long p = 0; p < div.size(); p++){
        if(possible){break;}
        long step = div[p];
        long nodes = n / step;
        if(nodes < 3){continue;}
        for(long offset = 0; offset < step; offset++){
            bool test(true);
            for(long u = 0; u < nodes; u++){if(!a[(step * u + offset) % n]){test = false; break;}}
            if(test){possible = true; break;}
        }
    }

    puts(possible ? "YES" : "NO");

    return 0;
}
