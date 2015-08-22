#include <cstdio>
#include <vector>

int main(){

    long n; scanf("%ld\n", &n);
    std::vector<bool> watchVec(n + 1, 0);
    
    for(long k = 0; k < n; k++){long temp; scanf("%ld", &temp); watchVec[temp] = 1;}
    for(long k = 1; k <= n; k++){if(!watchVec[k]){printf("%ld\n", k); break;}}

    return 0;
}
