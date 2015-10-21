#include <cstdio>
#include <vector>


int main(){

    const long N = 3000;
    std::vector<long> harvest(N + 2, 0);
    long n, v; scanf("%ld %ld", &n, &v);

    for(long p = 0; p < n; p++){
        long a, b; scanf("%ld %ld", &a, &b);

        long capacity = v - harvest[a];

        if(b <= capacity){harvest[a] += b; b = 0;}
        else{harvest[a] = v; b -= capacity;}

        harvest[a + 1] += b;
        if(harvest[a + 1] > v){harvest[a + 1] = v;}

    }


    long total(0);
    for(long p = 0; p < harvest.size() ; p++){total += harvest[p];}
    printf("%ld\n", total);

    return 0;
}
