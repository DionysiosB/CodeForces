#include <cstdio>
#include <iostream>

int main(){

    long long n, m, k; scanf("%lld %lld %lld", &n, &m, &k);
    if(n > m){long long temp = n; n = m; m = temp;}

    long long result = 0;

    if(k + 2 > m + n){result = -1;}
    else if(k < n){
        long long candidateA = n * (m / (k + 1));
        long long candidateB = (n / (k + 1)) * m;
        result = (candidateA > candidateB) ? candidateA : candidateB;
    }
    else if(n <= k && k < m){result = n * (m / (k + 1));}
    else if(m <= k && k <= m + n - 2){result = n / (k + 2 - m);}
    else{result = -1;}

        
    std::cout << result << std::endl;


    return 0;
}
