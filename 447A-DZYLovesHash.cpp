#include <cstdio>
#include <vector>

int main(){

    long p, n; scanf("%ld %ld\n", &p, &n);
    std::vector<bool> taken(p, 0);

    long output(-1);

    for(int k = 1; k <= n; k++){
        long temp; scanf("%ld\n", &temp);
        if(taken[temp % p]){output = k; break;}
        else{taken[temp % p] = 1;}
    }

    printf("%ld\n", output);

    return 0;
}
