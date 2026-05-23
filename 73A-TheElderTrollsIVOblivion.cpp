#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    const int N = 3;
    long x, y, z, m; scanf("%ld %ld %ld %ld", &x, &y, &z, &m);
    std::vector<long> dim(N);dim[0] = x; dim[1] = y; dim[2] = z;
    sort(dim.begin(), dim.end());

    long a = m / 3; if(a > dim[0] - 1){a = dim[0] - 1;}
    long b = (m - a) / 2; if(b > dim[1] - 1){b = dim[1] - 1;}
    long c = (m - a - b) / 1; if(c > dim[2] - 1){c = dim[2] - 1;}
    
    long long output = (1LL + a) * (1LL + b) * (1LL + c);
    printf("%lld\n", output);

    return 0;
}
