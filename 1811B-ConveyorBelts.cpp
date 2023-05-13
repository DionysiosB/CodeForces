#include <cstdio>
#include <algorithm>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, x1, y1, x2, y2; scanf("%ld %ld %ld %ld %ld", &n, &x1, &y1, &x2, &y2);
        long start  = std::min(std::min(x1, n + 1 - x1), std::min(y1, n + 1 - y1));
        long finish = std::min(std::min(x2, n + 1 - x2), std::min(y2, n + 1 - y2));
        long diff = start - finish; diff = (diff > 0) ? diff : (-diff);
        printf("%ld\n", diff);
    }

}
