#include <cstdio>
#include <vector>
#include <algorithm>
 
int main() {
    
    long t; scanf("%ld", &t);
    while(t--){
        std::vector<long> v(3); scanf("%ld %ld %ld", &v[0], &v[1], &v[2]);
        sort(v.begin(), v.end());
        printf("%ld\n", std::min(v[1], v[2] - v[0]));
    }
 
}
