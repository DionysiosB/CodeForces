#include <cstdio>
#include <vector>

int main(){

    const long MOD = 1000000007;

    long n; scanf("%ld\n", &n);
    std::vector<long> f; f.push_back(1);

    for(long p = 0; p < n; p++) {
        char ch; scanf("%c\n", &ch);
        if(ch == 'f'){f.push_back(0);}
        else{for(long q = 1; q < f.size(); q++){f[q] += f[q - 1]; f[q] %= MOD;}}
    }

    printf("%ld\n", f.back());

    return 0;
}
