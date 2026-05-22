#include <cstdio>
#include <iostream>

int main(){

    long n, k; std::cin >> n >> k; scanf("\n");
    std::string stripe; getline(std::cin, stripe);
    //std::cout << stripe << std::endl;

    if(k == 2){
        long totalA(0), totalB(0);
        for(long p = 0; p < n; p++){
            if(stripe[p] == 'A' + (p % 2)){++totalB;}
            else{++totalA;}
        }

        long total = totalA; int offset = 0;
        if(totalB < totalA){total = totalB; offset = 1;}

        printf("%ld\n", total);
        for(int p = 0; p < n; p++){printf("%c", 'A' + (p + offset) % 2);}
        puts("");
    }
    else{

        long total(0);

        if(stripe[1] == stripe[0]){++total; for(int q = 0; q < 3; q++){if(stripe[0] != 'A' + q && ((n == 2) || (n > 2 && stripe[2] != 'A' + q))){stripe[1] = 'A' + q; break;}}}

        for(long p = 1; p < n; p++){
            //std::cout << stripe[p - 1] << "\t*" << stripe[p] << "*\t" << stripe[p + 1] << std::endl;
            if(stripe[p] != stripe[p - 1]){continue;}
            ++total; 
            if(stripe[p - 2] != stripe[p + 1]){stripe[p] = stripe[p - 2];}
            else{for(int q = 0; q < 3; q++){if(stripe[p - 1] != 'A' + q && stripe[p + 1] != 'A' + q){stripe[p] = 'A' + q; break;}}}
        }
        printf("%ld\n", total);
        std::cout << stripe << std::endl; 
    }

    return 0;
}
