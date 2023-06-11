#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long l, r, x; scanf("%ld %ld %ld", &l, &r, &x);
        long a, b; scanf("%ld %ld", &a, &b);

        if(a == b){puts("0");}
        else if(a >= b + x || b >= a + x){puts("1");}
        else if(a >= l + x && b >= l + x){puts("2");}
        else if(r >= a + x && r >= b + x){puts("2");}
        else if(a >= l + x && r >= b + x){puts("3");}
        else if(r >= a + x && b >= l + x){puts("3");}
        else{puts("-1");}
    }
}
