#include <cstdio>
#include <vector>
#include <unordered_map>

int main(){

    long n; scanf("%ld", &n);
    std::vector<long> v;
    std::unordered_map<long, long> m;

    long cmx(0);
    for(long p = 0; p < n; p++){
        long x; scanf("%ld", &x);
        for(long p = 0; p < v.size(); p++){
            ++m[x + v[p]];
            cmx = (cmx > m[x + v[p]] ? cmx : m[x + v[p]]);
        }
        v.push_back(x);
    }

    printf("%ld\n", cmx);

    return 0;
}
