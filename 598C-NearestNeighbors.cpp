#include <cstdio>
#include <vector>
#include <cmath>
#include <algorithm>

int main(){

    const long double PI = 3.1415926535897932384626433832795028841971693993751; 

    long n; scanf("%ld\n", &n);
    std::vector<std::pair<long double, long> > proj(n);

    for(long p = 0; p < n; p++){
        long x, y; scanf("%ld %ld\n", &x, &y);
        long double angle = atan2l(y, x);
        if(angle < 0){angle += 2 * PI;}
        proj[p] = std::pair<long double, long>(angle, p) ;
    }

    sort(proj.begin(), proj.end());

    long double minDiff = 2 * PI - (proj[n - 1].first - proj[0].first);
    std::pair<long, long> closest = std::pair<long, long>(proj[0].second, proj[n - 1].second);
    for(int p = 1; p < n; p++){
        long double diff = proj[p].first - proj[p - 1].first;
        if(diff < minDiff){minDiff = diff; closest = std::pair<long, long>(proj[p - 1].second, proj[p].second);}
    }

    printf("%ld %ld\n", 1 + closest.first, 1 + closest.second);

    return 0;
}
