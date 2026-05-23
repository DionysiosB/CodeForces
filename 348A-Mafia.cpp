#include <cstdio>

int main(){

    long n; scanf("%ld", &n);
    long long total(0), minRounds(0);
    for(long p = 0; p < n; p++){
        long temp; 
        scanf("%ld", &temp); 
        total += temp;
        if(temp > minRounds){minRounds = temp;}
    }

    long long rounds = total / (n - 1);
    if(total % (n - 1) > 0){++rounds;}
    if(rounds < minRounds){rounds = minRounds;}

    printf("%lld\n", rounds);

    return 0;
}
