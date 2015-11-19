#include <cstdio>

int main(){

    long long a, b; scanf("%lld %lld\n", &a, &b);


    if(a == b){puts("infinity"); return 0;}
    else if(a < b){puts("0"); return 0;}

    long long diff = a - b;
    long long output = 0;
    long long div = 0;
    for(div = 1; div * div < diff; div++){
        if(diff % div == 0){
            if(div > b){++output;}
            if((diff / div) > b){++output;}
        }
    }
    if(div > b && div * div == diff){++output;}

    printf("%lld\n", output);

    return 0;
}
