#include <cstdio>

int main(){
    long n(0); scanf("%ld", &n);
    int previous(0), current(0); long total(0);
    while(n--){scanf("%d", &current); if(current != previous){++total;}; previous = current;}
    printf("%ld", total);
    return 0;
}
