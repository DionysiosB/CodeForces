#include <cstdio>

int main(){

    long long l, r; scanf("%lld %lld\n", &l, &r);
    
    if(l % 2 == 0 && (r - l) >= 2){printf("%lld %lld %lld\n", l, l + 1, l + 2);}
    else if(l % 2 == 1 && (r - l) >= 3){printf("%lld %lld %lld\n", l + 1, l + 2, l + 3);}
    else{puts("-1");}

    return 0;
}
