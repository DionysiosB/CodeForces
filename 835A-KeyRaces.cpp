#include <cstdio>

int main(){

    long s, v1, v2, t1, t2; scanf("%ld %ld %ld %ld %ld", &s, &v1, &v2, &t1, &t2);
    long a = s * v1 + 2 * t1;
    long b = s * v2 + 2 * t2;

    if(a == b){puts("Friendship");}
    else{puts((a < b) ? "First" : "Second");}

    return 0;
}
