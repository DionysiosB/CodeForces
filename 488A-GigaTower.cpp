#include <cstdio>


bool isLucky(long x, int d){

    if(x < 0){x = -x;}

    while(x > 0){
        if(x % 10 == d){return true;}
        else{x /= 10;}
    }

    return false;
}


int main(){

    const int L = 8;

    long a; scanf("%ld", &a);
    for(int p = 1; p <= 1000; p++){
        if(isLucky(a + p, L)){printf("%d\n", p); break;}
    }

    return 0;
}
