#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        std::vector<long> a(4);
        scanf("%ld %ld %ld %ld", &a[0], &a[1], &a[2], &a[3]);
        sort(a.begin(), a.end());
        printf("%ld\n", a[0] * a[2]);
    }

}
