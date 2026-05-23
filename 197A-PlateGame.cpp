#include <cstdio>

int main(){

    int a(0), b(0), r(0); scanf("%d %d %d", &a, &b, &r);

    if(2 * r <= a && 2 * r <= b){puts("First");}
    else{puts("Second");}

    return 0;
}
