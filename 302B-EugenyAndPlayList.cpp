#include <cstdio>
#include <vector>

int main(){

    long n(0), m(0); scanf("%ld %ld\n", &n, &m);
    std::vector<long> changeTimes(n + 1, 0);
    for(int k = 1; k <= n; k++){
        long repeats(0), duration(0); scanf("%ld %ld\n", &repeats, &duration);
        changeTimes[k] = changeTimes[k - 1] + repeats * duration;
    }

    long currentIndex(1);
    while(m--){
        long search(0); scanf("%ld", &search);
        while(search > changeTimes[currentIndex]){++currentIndex;}
        printf("%ld\n", currentIndex);
    }

    return 0;
}
