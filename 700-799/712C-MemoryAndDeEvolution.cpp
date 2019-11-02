#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long x, y; scanf("%ld %ld", &x, &y);
    std::vector<long> v(3, y);
    long count(0);
    while(v[0] < x){
        v[0] = v[1] + v[2] - 1;
        v[0] = (v[0] < x) ? v[0] : x;
        sort(v.begin(), v.end());
        ++count;
    }

    printf("%ld\n", count);

    return 0;
}
