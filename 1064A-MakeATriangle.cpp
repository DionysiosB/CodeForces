#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    std::vector<long> v(3); scanf("%ld %ld %ld", &v[0], &v[1], &v[2]);
    sort(v.begin(), v.end());
    long diff = (1 + v[2] - v[1] - v[0]);
    diff = (diff < 0) ? 0 : diff;
    printf("%ld\n", diff);

    return 0;
}
