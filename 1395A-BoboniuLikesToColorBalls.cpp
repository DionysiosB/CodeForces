#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long r, g, b, w; scanf("%ld %ld %ld %ld", &r, &g, &b, &w);
        if(r % 2 + g % 2 + b % 2 + w % 2 <= 1){puts("Yes");}
        else if(r > 0 && g > 0 && b > 0){
            --r; --g; --b; ++w;
            if(r % 2 + g % 2 + b % 2 + w % 2 <= 1){puts("Yes");}
            else{puts("No");}
        }
        else{puts("No");}
    }

    return 0;
}
