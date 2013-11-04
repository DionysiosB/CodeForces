#include <iostream>
#include <cstdio>

int main(){
    int64_t k , m; scanf("%lld\n%lld", &k, &m); 
    int64_t temp = k; int times = 0;
    while(temp < m){temp *= k; times++;}
    if(temp == m){printf("YES\n%d", times);} 
    else{printf("NO\n");}
    return 0;
}
