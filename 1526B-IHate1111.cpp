#include <cstdio>
#include <vector>

int main(){


    std::vector<bool> check(1111, false);
    for(long p = 1; p < 1111; p++){
        if(p % 11 == 0 || p % 111 == 0){check[p] = true;}
        else if(p > 11 && check[p - 11]){check[p] = true;}
        else if(p > 111 && check[p - 111]){check[p] = true;}
    }


    long t; scanf("%ld", &t);
    while(t--){
        long x; scanf("%ld\n", &x);
        if(x >= 1111){puts("YES");}
        else{puts(check[x] ? "YES" : "NO");}
    }

}
