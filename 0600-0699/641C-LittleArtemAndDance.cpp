#include <cstdio>
#include <vector>

int main() {

    long n, q; scanf("%ld %ld", &n, &q);
    long shift(0); std::vector<long> z;

    for (long p = 0; p < q; p++) {
        int cm; scanf("%d", &cm);
        if (cm == 1){long x; scanf("%ld", &x); shift += (n + x); shift %= n;}
        else {
            if(z.size() && z.back() == (shift % 2)){z.pop_back();}
            else{z.push_back(shift % 2);}
        }
    }

    std::vector<long> f(n);
    if(!z.size()){for(long p = 0; p < n; p++){f[p] = p + 1;}}
    else{
        for (long p = 0; p < n; p++) {
            if((p + z[0]) % 2 == 0){f[(p + z.size()) % n] = p + 1;}
            else{f[(p - z.size() % n + n) % n] = p + 1;}
        }
    }

    for(long p = 0; p < n; p++){printf("%ld ", f[(p + n - shift) % n]);}
    puts("");

    return 0;
}
