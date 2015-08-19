#include <cstdio>
#include <vector>

int main(){

    const int D = 3000;
    std::vector<long> fruit(D + 1, 0);

    long n, v; scanf("%ld %ld\n", &n, &v);

    for(long p = 0; p < n; p++){
        long day, number; scanf("%ld %ld\n", &day, &number);
        fruit[day] += number;
    }

    long total = 0;
    for(long p = 1; p <= D; p++){
        if(fruit[p - 1] + fruit[p] < v){
            total += fruit[p - 1] + fruit[p];
            fruit[p] = 0;
        }
        else{
            total += v;
            long current(v); 
            current -= fruit[p - 1];
            if(current > 0){fruit[p] -= current;}
        }
    }

    printf("%ld\n", total);

    return 0;
}
