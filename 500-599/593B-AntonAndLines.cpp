#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long long n; scanf("%lld\n", &n);
    std::vector<std::pair<long long, long long> > lines(n);
    long long l, r; scanf("%lld %lld\n", &l, &r);

    for(int p = 0; p < n; p++){
        long long k, b; scanf("%lld %lld\n", &k, &b);
        lines[p] = std::pair<long long, long long>(k * l + b, k * r + b);
    }

    sort(lines.begin(), lines.end());

    for(int p = 1; p < n; p++){
        if(lines[p - 1].first == lines[p].first) continue;
        if(lines[p - 1].second > lines[p].second){puts("YES"); return 0;}
    }

    puts("NO");
    return 0;
}
