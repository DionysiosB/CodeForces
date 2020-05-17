#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long a, b; scanf("%ld %ld", &a, &b);
        long c, d; scanf("%ld %ld", &c, &d);
        if((a == c) && (b + d == a)){puts("Yes");}
        else if((a == d) && (b + c == a)){puts("Yes");}
        else if((b == c) && (a + d == b)){puts("Yes");}
        else if((b == d) && (a + c == b)){puts("Yes");}
        else{puts("No");}
    }

    return 0;
}
