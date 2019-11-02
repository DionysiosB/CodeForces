#include <cstdio>
#include <vector>
#include <cmath>

int main(){
    
    int n(0), k(0); scanf("%d %d", &n, &k);

    bool *prime = new bool[n + 1];

    prime[0] = prime[1] = 0;
    for(int k = 2; k <= n; k++){prime[k] = 1;}

    for(int k = 2; k <= sqrt(n) + 1; k++){
        if(!prime[k]){continue;}
        for(int m = 2 * k; m <= n; m += k){prime[m] = 0;}
    }


    std::vector<int> primes;
    for(int k = 2; k <= n; k++){if(prime[k]){primes.push_back(k);}}
    delete[] prime;



    int total(0);
    for(int k = 2; k < primes.size(); k++){
        for(int m = 0; m < k - 1; m++){
            if(primes[m] + primes[m + 1] + 1 == primes[k]){++total;}
        }
    }


    if(total >= k){puts("YES");}
    else{puts("NO");}

    return 0;
}
