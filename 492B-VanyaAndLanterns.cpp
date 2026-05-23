#include <cstdio>
#include <vector>
#include <algorithm>


int main(){

    long n, l; scanf("%ld %ld\n", &n, &l);
    std::vector<long> lanterns(n);
    for(long p = 0; p < n; p++){scanf("%ld", &lanterns[p]);}
    sort(lanterns.begin(), lanterns.end());

    double d = l - lanterns[n - 1];
    if(lanterns[0] > d){d = lanterns[0];}

    for(long p = 0; p < lanterns.size(); p++){
        if(lanterns[p] - lanterns[p - 1] > 2 * d){
            d = 0.5 * (lanterns[p] - lanterns[p - 1]);
        }
    }

    printf("%.10lf\n", d);

    return 0;
}
