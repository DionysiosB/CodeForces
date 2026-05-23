#include <cstdio>
#include <iostream>

int main(){

    long n(0); scanf("%ld", &n);

    int guardPost(0);
    long chocFirst(0), juiceFirst(0), chocSec(0), juiceSec(0);
    long firstPrice(0), secondPrice(0);

    for(int k = 1; k <= 4; k++){
        scanf("%ld %ld %ld %ld", &chocFirst, &juiceFirst, &chocSec, &juiceSec);
        firstPrice = std::min(chocFirst, juiceFirst);
        secondPrice = n - firstPrice;
        if(secondPrice >= std::min(chocSec, juiceSec)){guardPost = k; break;}
    }

    if(guardPost){printf("%d %ld %ld\n", guardPost, firstPrice, secondPrice);}
    else{puts("-1");}

    return 0;
}
