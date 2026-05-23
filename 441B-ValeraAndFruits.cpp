#include <cstdio>
#include <vector>

int main(){

    const long N = 3000;
    std::vector<long> harvest(N + 2, 0);
    long n, v; scanf("%ld %ld", &n, &v);

    for(int p = 0; p < n; p++){
        long day, fruit; scanf("%ld %ld", &day, &fruit);
        harvest[day] += fruit;
    }


    long carry(0);
    for(int p = 1; p <= N + 1; p++){
        harvest[p] += carry;

        if(harvest[p] > v){carry = harvest[p] - v; harvest[p] = v;}
        else{carry = 0;}

        if(carry > v){carry = v;}
    }

    long total(0);
    for(long p = 0; p < harvest.size(); p++){total += harvest[p];}
    printf("%ld\n", total);


    return 0;
}
