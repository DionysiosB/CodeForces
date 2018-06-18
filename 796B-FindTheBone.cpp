#include <cstdio>
#include <vector>

int main(){

    long n, m, k; scanf("%ld %ld %ld", &n, &m, &k);
    std::vector<bool> hole(n + 1, 0);
    while(m--){long h; scanf("%ld", &h); hole[h] = 1;}
    long current(1);
    while(k--){
        if(hole[current]){break;}
        long u, v; scanf("%ld %ld", &u, &v);
        if(current == u){current = v;}
        else if(current == v){current = u;}
    }

    printf("%ld\n", current);

    return 0;
}
