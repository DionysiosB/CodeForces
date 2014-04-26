#include <cstdio>
#include <algorithm>

int main(){

    long n(0), m(0); scanf("%ld %ld", &n, &m);
    long *dirty = new long[m];
    long temp(0); bool possible(1);
    
    for(long k = 0; k < m; k++){scanf("%ld", &temp); dirty[k] = temp; if(temp == 1 || temp == n){possible = 0; break;}}
    std::sort(dirty, dirty + m);
    for(long k = 0; k < m - 2; k++){if(dirty[k + 1] == dirty[k] + 1 && dirty[k + 2] == dirty[k] + 2){possible = 0; break;}}
    if(possible){puts("YES");} else{puts("NO");}
    return 0;
}
